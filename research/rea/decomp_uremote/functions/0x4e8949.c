// rea decompile_all
// name: FUN_004e8949
// address: 0x4e8949
// body: available
// range: 0x4e8949-0x4e8a5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e8949(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  float10 fVar6;
  int local_10;
  float local_c;
  
  local_10 = *(int *)(unaff_ESI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  iVar4 = *(int *)(unaff_ESI + 0x24);
  *(float *)(unaff_ESI + 4) = *(float *)(unaff_ESI + 8) + *(float *)(unaff_ESI + 4);
  iVar5 = *(int *)(**(int **)(unaff_ESI + 0x20) + iVar4 * 4);
  fVar6 = (float10)FUN_0049fa3d();
  *(float *)(unaff_ESI + 8) = (float)fVar6;
  fVar6 = (float10)FUN_0049fa43();
  *(float *)(unaff_ESI + 0xc) = (float)fVar6;
  if (*(int *)(unaff_ESI + 0x18) == 0) {
    local_c = 0.0;
  }
  else {
    local_c = *(float *)(*(int *)(unaff_ESI + 0x18) + 4);
  }
  while( true ) {
    cVar3 = FUN_004e8fe5(local_c);
    if (cVar3 != '\0') {
      return;
    }
    iVar1 = (*(int **)(unaff_ESI + 0x20))[2];
    if (iVar1 <= iVar4) {
      return;
    }
    bVar2 = false;
    if (*(int *)(iVar5 + 0x10) <= local_10) {
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
      local_10 = 0;
      iVar5 = *(int *)(**(int **)(unaff_ESI + 0x20) + iVar4 * 4);
      bVar2 = true;
    }
    iVar1 = *(int *)(*(int *)(iVar5 + 8) + local_10 * 4);
    if (iVar1 == 0) break;
    local_c = *(float *)(iVar1 + 4) + local_c;
    cVar3 = FUN_004e8fe5(local_c);
    if (cVar3 != '\0') {
      return;
    }
    cVar3 = FUN_004e7e03(iVar1);
    if (cVar3 != '\0') {
      return;
    }
    if (bVar2) {
      fVar6 = (float10)FUN_0049fa3d();
      fVar6 = (float10)FUN_0043bcfe(*(undefined4 *)(unaff_ESI + 8),(float)fVar6);
      *(float *)(unaff_ESI + 8) = (float)fVar6;
      fVar6 = (float10)FUN_0049fa43();
      fVar6 = (float10)FUN_0043bcfe(*(undefined4 *)(unaff_ESI + 0xc),(float)fVar6);
      *(float *)(unaff_ESI + 0xc) = (float)fVar6;
    }
    local_10 = local_10 + 1;
  }
  return;
}

