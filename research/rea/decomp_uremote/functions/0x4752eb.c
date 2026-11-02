// rea decompile_all
// name: FUN_004752eb
// address: 0x4752eb
// body: available
// range: 0x4752eb-0x4754e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004752eb(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *in_EAX;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_ECX;
  undefined4 *unaff_EBX;
  float10 fVar8;
  float local_14;
  float local_10;
  
  *unaff_EBX = in_ECX;
  unaff_EBX[1] = param_2;
  fVar1 = *in_EAX;
  fVar2 = in_EAX[1];
  local_14 = in_EAX[2];
  local_10 = in_EAX[3];
  cVar4 = FUN_00477051();
  if (cVar4 == '\0') {
    FUN_004a5542();
    FUN_004a8f0b();
    FUN_004a8f0b();
    FUN_004a8f0b();
    pfVar5 = (float *)FUN_004a55cf();
    local_14 = *pfVar5;
    local_10 = pfVar5[1];
  }
  fVar8 = (float10)FUN_00474d74();
  *(bool *)(unaff_EBX + 10) = fVar8 < (float10)0.001;
  fVar8 = (float10)FUN_00474d74();
  *(bool *)((int)unaff_EBX + 0x29) = fVar8 < (float10)0.001;
  if (*(char *)(unaff_EBX + 10) == '\0') {
    if (fVar8 >= (float10)0.001) {
      fVar3 = (local_10 - fVar2) / (fVar1 - local_14);
      *(double *)(unaff_EBX + 8) = (double)(fVar2 - fVar1 / fVar3);
      iVar7 = FUN_00470221();
      unaff_EBX[4] = iVar7;
      *(double *)(unaff_EBX + 6) = (double)iVar7 * (double)fVar3;
      return;
    }
    uVar6 = FUN_00470221();
  }
  else {
    uVar6 = FUN_00470221();
  }
  unaff_EBX[4] = uVar6;
  uVar6 = FUN_004a8e4a();
  unaff_EBX[3] = uVar6;
  return;
}

