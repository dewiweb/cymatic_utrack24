// rea decompile_all
// name: FUN_004a6333
// address: 0x4a6333
// body: available
// range: 0x4a6333-0x4a642f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6333(void)

{
  undefined4 *in_EAX;
  int iVar1;
  float *pfVar2;
  float *unaff_EDI;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = in_EAX[2];
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_14 = 0.0;
      *unaff_EDI = 0.0;
      unaff_EDI[1] = 0.0;
      unaff_EDI[2] = 0.0;
    }
    else {
      pfVar2 = (float *)*in_EAX;
      *unaff_EDI = *pfVar2;
      unaff_EDI[1] = pfVar2[1];
      unaff_EDI[2] = pfVar2[2];
      local_14 = pfVar2[3];
    }
  }
  else {
    pfVar2 = (float *)*in_EAX;
    local_8 = *pfVar2;
    iVar1 = iVar1 + -1;
    local_c = pfVar2[1];
    local_10 = pfVar2[2] + local_8;
    local_14 = pfVar2[3] + local_c;
    if (0 < iVar1) {
      pfVar2 = pfVar2 + iVar1 * 4;
      do {
        fVar3 = (float10)FUN_0043d2e1(local_8,*pfVar2);
        local_8 = (float)fVar3;
        fVar3 = (float10)FUN_0043d2e1(local_c,pfVar2[1]);
        local_c = (float)fVar3;
        fVar3 = (float10)FUN_0043bcfe(local_10,pfVar2[2] + *pfVar2);
        local_10 = (float)fVar3;
        fVar3 = (float10)FUN_0043bcfe(local_14,pfVar2[3] + pfVar2[1]);
        iVar1 = iVar1 + -1;
        local_14 = (float)fVar3;
        pfVar2 = pfVar2 + -4;
      } while (0 < iVar1);
    }
    *unaff_EDI = local_8;
    unaff_EDI[1] = local_c;
    unaff_EDI[2] = local_10 - local_8;
    local_14 = local_14 - local_c;
  }
  unaff_EDI[3] = local_14;
  return;
}

