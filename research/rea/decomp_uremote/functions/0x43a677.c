// rea decompile_all
// name: FUN_0043a677
// address: 0x43a677
// body: available
// range: 0x43a677-0x43a745 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a677(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int *in_ECX;
  int *unaff_EDI;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  
  *unaff_EDI = (int)in_ECX;
  unaff_EDI[1] = in_EAX;
  iVar2 = FUN_00467ec4();
  unaff_EDI[2] = iVar2;
  unaff_EDI[3] = *(int *)(unaff_EDI[1] + 8);
  unaff_EDI[4] = *(int *)(unaff_EDI[1] + 0xc);
  iVar2 = *in_ECX;
  if (((1 < iVar2) && (3 < iVar2)) && (iVar2 == 4)) {
    iVar2 = *unaff_EDI;
    FUN_0043a5ca(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
    unaff_EDI[5] = (int)(local_14 + local_c * 0.5);
    unaff_EDI[6] = (int)(fStack_8 * 0.5 + local_10);
    fVar1 = 4.0 / (*(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x1c) + 2.0);
    fVar3 = (float10)FUN_0043a995(0,(double)(*(float *)(iVar2 + 0x1c) * fVar1));
    unaff_EDI[7] = (int)(float)fVar3;
    unaff_EDI[8] = (int)fVar1;
    fVar3 = (float10)FUN_0043a995(0,(double)(*(float *)(iVar2 + 0x20) * fVar1));
    unaff_EDI[9] = (int)(float)fVar3;
  }
  return;
}

