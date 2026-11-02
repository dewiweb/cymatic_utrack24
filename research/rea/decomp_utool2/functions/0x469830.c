// rea decompile_all
// name: FUN_00469830
// address: 0x469830
// body: available
// range: 0x469830-0x4698f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00469830(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  int *in_EDX;
  float fVar5;
  
  iVar4 = param_2;
  if (param_2 < param_3) {
    iVar4 = param_3;
  }
  in_EDX[6] = iVar4;
  in_EDX[5] = param_2;
  iVar4 = *(int *)(param_1 + 4);
  if (*in_EDX != iVar4) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      UNLOCK();
    }
    puVar3 = (undefined4 *)*in_EDX;
    *in_EDX = iVar4;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar3 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  in_EDX[1] = *(int *)(param_1 + 8);
  fVar2 = (float)in_ECX[7];
  fVar5 = fVar2;
  FUN_006823f0();
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  iVar4 = *(int *)(param_1 + 4);
  in_ECX[7] = (int)fVar5;
  FUN_006823f0();
  fVar5 = *(float *)(iVar4 + 0x14) - fVar5;
  if (fVar5 <= (float)in_ECX[8]) {
    fVar5 = (float)in_ECX[8];
  }
  in_ECX[8] = (int)fVar5;
  iVar4 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar4) {
    FUN_00409cf0(iVar4 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar4 = in_ECX[2];
  in_ECX[2] = iVar4 + 1;
  *(int **)(*in_ECX + iVar4 * 4) = in_EDX;
  return;
}

