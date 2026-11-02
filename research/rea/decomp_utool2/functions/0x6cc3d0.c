// rea decompile_all
// name: FUN_006cc3d0
// address: 0x6cc3d0
// body: available
// range: 0x6cc3d0-0x6cc4fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc3d0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726585;
  local_10 = ExceptionList;
  if (in_ECX[3] == 0) {
    return;
  }
  ExceptionList = &local_10;
  piVar2 = (int *)(**(code **)(*in_ECX + 0x50))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (piVar2 != (int *)0x0) {
    if ((char)param_1 == '\0') {
      iVar3 = (**(code **)(*piVar2 + 8))();
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 4))();
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)*piVar2)(1);
    }
    if (iVar3 != 0) {
      cVar1 = FUN_006ceda0();
      if (cVar1 != '\0') {
        puVar4 = (undefined4 *)FUN_0040de70(iVar3);
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          puVar4[1] = puVar4[1] + 1;
          UNLOCK();
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar2 = (int *)FUN_006cecc0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xa0))();
        }
        if (puVar4 == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return;
        }
        if ((puVar4[2] == 0) || (cVar1 = FUN_006ceda0(), cVar1 != '\0')) {
          LOCK();
          piVar2 = puVar4 + 1;
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            ExceptionList = local_10;
            return;
          }
          (**(code **)*puVar4)(1);
          ExceptionList = local_10;
          return;
        }
        local_8 = local_8 & 0xffffff00;
        FUN_004030d0();
      }
      FUN_006cc500(1,1);
      ExceptionList = local_10;
      return;
    }
  }
  FUN_006cc3d0(param_1);
  ExceptionList = local_10;
  return;
}

