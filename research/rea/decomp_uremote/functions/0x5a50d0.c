// rea decompile_all
// name: FUN_005a50d0
// address: 0x5a50d0
// body: available
// range: 0x5a50d0-0x5a52c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a50d0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  int local_48;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined4 local_24;
  ushort local_20 [3];
  char local_19;
  ushort local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d76ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = (**(code **)(*param_1 + 0x40))(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  uVar3 = FUN_005a4770(uVar3);
  cVar2 = FUN_005a5a80(uVar3);
  if (cVar2 == '\0') {
    local_18 = (**(code **)(*param_1 + 0x7c))();
    FUN_005017d0();
    local_8 = 0;
    local_19 = 0;
    local_14 = (**(code **)(*param_1 + 0x5c))();
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\0') {
      if (local_14 == 0) {
        local_20[0] = local_18;
        local_19 = FUN_00518f40(local_18,local_30,local_28);
      }
      else {
        puVar8 = local_20;
        puVar7 = local_30;
        uVar4 = (uint)local_18;
        uVar3 = FUN_005a3ec0(uVar3);
        local_19 = FUN_005193f0(local_14,uVar3,uVar4,puVar7,puVar8);
      }
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x74);
      uVar6 = (uint)local_18;
      uVar4 = (*(code *)**(undefined4 **)
                          (*(int *)(in_ECX + 0x74) + 0x28 +
                          *(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x28) + 0xc)))
                        (local_30,local_20);
      iVar5 = (uVar4 & 0xffff) * uVar6;
      local_19 = (**(code **)(*(int *)(iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc)) + 0xc)
                 )((int)(iVar5 + (iVar5 >> 0x1f & 0xffffU)) >> 0x10);
    }
    local_24 = FUN_00501cb0();
    if (in_ECX == 0) {
      local_48 = 0;
    }
    else {
      local_48 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    FUN_00578a60(local_48,-(uint)(local_19 != '\0') & (uint)&local_24,param_1);
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  ExceptionList = local_10;
  return;
}

