// rea decompile_all
// name: FUN_00641400
// address: 0x641400
// body: available
// range: 0x641400-0x64154c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00641400(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined1 local_28 [20];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fca3;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*param_2 != 0) {
    FUN_006732e0(&param_2,3);
    local_8 = 0;
    if (param_2 != (int *)0x0) {
      iVar4 = (**(code **)(*param_2 + 0x14))(uVar3);
      if (1 < iVar4) {
        puVar5 = (undefined4 *)(**(code **)(*param_2 + 8))(&local_14);
        piVar1 = (int *)*puVar5;
        *puVar5 = param_2;
        param_2 = piVar1;
        if (local_14 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_14 + 1;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_14)(1);
          }
        }
      }
    }
    FUN_00641590();
    FUN_00684c50(*in_ECX);
    local_40 = 0x3f800000;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0x3f800000;
    local_38 = (float)(int)in_ECX[2];
    local_2c = (float)(int)in_ECX[3];
    if (param_2 != (int *)0x0) {
      cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)*param_1 + 0x34))();
        (**(code **)(*(int *)*param_1 + 0x24))(&param_2,&local_40);
        (**(code **)(*(int *)*param_1 + 0x2c))(local_28);
        (**(code **)(*(int *)*param_1 + 0x54))(local_28,0);
        (**(code **)(*(int *)*param_1 + 0x38))();
      }
      if (param_2 != (int *)0x0) {
        LOCK();
        piVar1 = param_2 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*param_2)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

