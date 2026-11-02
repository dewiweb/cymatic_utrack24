// rea decompile_all
// name: FUN_0069fb60
// address: 0x69fb60
// body: available
// range: 0x69fb60-0x69fc29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069fb60(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  
  iVar3 = FUN_0069fc30(param_1);
  if (iVar3 == 0) {
    piVar4 = operator_new(8);
    iVar3 = *param_1;
    *piVar4 = iVar3;
    piVar5 = (int *)(iVar3 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    iVar3 = *param_2;
    piVar4[1] = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    iVar3 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar3) {
      FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar3 = in_ECX[2];
    in_ECX[2] = iVar3 + 1;
    *(int **)(*in_ECX + iVar3 * 4) = piVar4;
  }
  else {
    piVar4 = (int *)(iVar3 + 4);
    cVar2 = FUN_0069ef00(param_2);
    if (cVar2 != '\0') {
      return;
    }
    iVar3 = *param_2;
    if (*piVar4 != iVar3) {
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      puVar1 = (undefined4 *)*piVar4;
      *piVar4 = iVar3;
      if (puVar1 != (undefined4 *)0x0) {
        piVar4 = puVar1 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar1)(1);
          FUN_0069fb00();
          return;
        }
      }
    }
  }
  FUN_0069fb00();
  return;
}

