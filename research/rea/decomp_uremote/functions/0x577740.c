// rea decompile_all
// name: FUN_00577740
// address: 0x577740
// body: available
// range: 0x577740-0x577b05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00577740(undefined4 param_1,short param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  int local_f0;
  char local_ec;
  undefined4 *local_d0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined4 *local_88;
  ushort local_84;
  undefined1 local_70 [95];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4f58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(uint *)(in_ECX + 0x70) & 0x8000) != 0) {
    cVar1 = FUN_00503fe0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    if (cVar1 == '\0') {
      cVar1 = FUN_00503cf0(in_ECX + 0xf8);
      if (cVar1 != '\0') {
        uVar2 = (uint)*(ushort *)(in_ECX + 0x98);
        puVar5 = local_94;
        uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28 +
                                     *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + 0x28) + 0xc)) +
                            0x98))(puVar5,uVar2);
        FUN_00503c30(uVar3,puVar5);
        FUN_00512300();
        local_8 = 0;
        FUN_0052dce0(local_a0);
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xd8);
        puVar5 = local_a0;
        uVar4 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) +
                            0x48))(local_b0,&DAT_0095c854,puVar5);
        FUN_00536470(uVar3,in_ECX + 0xf8,0x303,*(undefined2 *)(in_ECX + 0x104),uVar4,puVar5,uVar2);
        FUN_00529f40(local_70,0);
        local_8 = 0xffffffff;
        FUN_005123f0();
      }
    }
    cVar1 = FUN_00503cf0(in_ECX + 0xf8);
    if (((cVar1 == '\0') && (*(short *)(in_ECX + 0x108) == param_2)) &&
       (*(char *)(in_ECX + 0x10a) == param_3)) {
      local_ec = '\0';
    }
    else {
      local_ec = '\x01';
    }
    local_11 = local_ec;
    FUN_00503de0(param_1);
    *(short *)(in_ECX + 0x108) = param_2;
    *(char *)(in_ECX + 0x10a) = param_3;
    if (local_11 != '\0') {
      local_84 = 0;
      while( true ) {
        local_d0 = (undefined4 *)0x0;
        if (local_84 < *(ushort *)(in_ECX + 0x5c)) {
          local_d0 = *(undefined4 **)(*(int *)(in_ECX + 0x58) + (uint)local_84 * 4);
        }
        local_88 = local_d0;
        local_84 = local_84 + 1;
        if (local_d0 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (in_ECX == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
        }
        (**(code **)*local_88)(local_f0,param_1,param_2,param_3);
        FUN_00515860();
      }
    }
    FUN_00577b10();
  }
  ExceptionList = local_10;
  return;
}

