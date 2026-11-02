// rea decompile_all
// name: FUN_00682f90
// address: 0x682f90
// body: available
// range: 0x682f90-0x6830be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682f90(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7,undefined4 *param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  float local_4c [3];
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720a32;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)*in_ECX;
    uVar5 = FUN_00472d90(param_3,param_4,param_5,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    cVar4 = (**(code **)(iVar2 + 0x28))(uVar5);
    puVar3 = param_8;
    if (cVar4 != '\0') {
      uVar5 = FUN_00472d90(param_7,param_8,param_9);
      uVar5 = FUN_00673930(&param_8,uVar5);
      local_8 = 0;
      local_4c[1] = 0.0;
      local_40 = 0;
      local_4c[0] = (float)param_4 / (float)(int)puVar3;
      local_3c = (float)param_5 / (float)param_9;
      local_4c[2] = (float)param_2 + 0.0;
      local_38 = (float)param_3 + 0.0;
      FUN_00676990(uVar5,local_4c,0);
      if (param_8 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = param_8 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*param_8)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

