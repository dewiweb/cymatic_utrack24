// rea decompile_all
// name: FUN_0048eed0
// address: 0x48eed0
// body: available
// range: 0x48eed0-0x48f040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048eed0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701d87;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  *(int *)(DAT_00c8a67c + 100) = *(int *)(DAT_00c8a67c + 100) + 1;
  local_18 = 0;
  local_14 = (void *)0x0;
  if (((*(int *)(in_ECX + 0x30) == 0) || (*(int *)(*(int *)(in_ECX + 0x30) + 8) == 0)) ||
     (*(char *)(param_2 + 10) == '\0')) {
    iVar3 = FUN_0048ede0(param_1,&local_18,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      iVar3 = 0;
      in_stack_ffffffc4 = param_3;
      in_stack_ffffffc8 = param_4;
    }
    else {
      iVar3 = FUN_0040de70(iVar3);
      in_stack_ffffffc4 = param_3;
      in_stack_ffffffc8 = param_4;
    }
    if (*(int *)(in_ECX + 0x30) != iVar3) {
      if (iVar3 != 0) {
        LOCK();
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        UNLOCK();
      }
      puVar2 = *(undefined4 **)(in_ECX + 0x30);
      *(int *)(in_ECX + 0x30) = iVar3;
      if (puVar2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar2 + 1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x30) + 8);
  }
  if (iVar3 != 0) {
    local_8 = 1;
    FUN_0048dfe0(local_18,local_14);
    local_8 = 0xffffffff;
    FUN_006cce50(in_ECX,param_2,in_stack_ffffffc4,in_stack_ffffffc8,param_5,param_6);
  }
  ExceptionList = local_10;
  return;
}

