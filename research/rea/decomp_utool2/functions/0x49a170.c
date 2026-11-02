// rea decompile_all
// name: FUN_0049a170
// address: 0x49a170
// body: available
// range: 0x49a170-0x49a2bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a170(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 local_24 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702958;
  local_10 = ExceptionList;
  uStack_34 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0x7c) != param_1) || (*(char *)(in_ECX + 0x80) != (char)param_2)) {
    FUN_006e6400(&uStack_44);
    FUN_006ce9f0(1);
    *(int *)(in_ECX + 0x7c) = param_1;
    *(char *)(in_ECX + 0x80) = (char)param_2;
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0x78) + 0x78);
  if (piVar1 != (int *)0x0) {
    uStack_38 = *(undefined4 *)(in_ECX + 0x7c);
    piStack_3c = &local_14;
    uStack_40 = 0x49a1e4;
    piVar3 = (int *)(**(code **)(*piVar1 + 0x34))();
    local_8 = 0;
    if (*(int **)(in_ECX + 0x38) == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = **(int **)(in_ECX + 0x38);
    }
    piVar2 = (int *)*piVar3;
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if (iVar7 != iVar6) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        piVar2[1] = piVar2[1] + 1;
        UNLOCK();
      }
      if (*(int *)(in_ECX + 0x38) != 0) {
        uStack_40 = 0x49a21f;
        FUN_004912c0();
      }
      *(int *)(in_ECX + 0x38) = *piVar3;
      if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
        uStack_40 = 0x49a232;
        FUN_006cec20();
      }
    }
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      uStack_40 = 0x49a245;
      FUN_004912c0();
    }
    uStack_40 = *(undefined4 *)(in_ECX + 0x74);
    *(undefined4 *)(in_ECX + 0x74) = 0;
    uStack_44 = param_2;
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(param_1);
    puVar5 = *(undefined4 **)(in_ECX + 0x74);
    if ((puVar5 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0x74) = puVar4, puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    piVar1 = *(int **)(in_ECX + 0x74);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))(1);
      FUN_006e5050(piVar1,0xffffffff);
      puVar5 = (undefined4 *)FUN_006e6400(local_24);
      FUN_006e9790(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
    }
  }
  ExceptionList = local_10;
  return;
}

