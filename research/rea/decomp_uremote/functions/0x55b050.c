// rea decompile_all
// name: FUN_0055b050
// address: 0x55b050
// body: available
// range: 0x55b050-0x55b305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_0055b050(undefined4 param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined1 local_7c [12];
  ushort local_70;
  ushort local_6c;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3df9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_6c = 0xffff;
  local_70 = 0;
  do {
    if (*(ushort *)(in_ECX + 1) <= local_70) {
      if ((short)local_6c < 0) {
        FUN_0055b560((uint)*(ushort *)(in_ECX + 1) + (uint)*(ushort *)((int)in_ECX + 6));
        FUN_00503650(param_1);
        *(undefined2 *)(*in_ECX + 0xc + (uint)local_70 * 0x18) = 1;
        *(undefined1 *)(*in_ECX + 0x14 + (uint)local_70 * 0x18) = 0;
        *(undefined4 *)(*in_ECX + 0x10 + (uint)local_70 * 0x18) = 2;
      }
      else {
        local_70 = local_6c;
        FUN_00503650(param_1);
        *(undefined2 *)(*in_ECX + 0xc + (uint)local_70 * 0x18) = 1;
        *(undefined1 *)(*in_ECX + 0x14 + (uint)local_70 * 0x18) = 0;
        *(undefined4 *)(*in_ECX + 0x10 + (uint)local_70 * 0x18) = 2;
      }
      FUN_00512300();
      local_8 = 0;
      puVar10 = &DAT_0095c898;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0x101;
      puVar4 = local_7c;
      uVar3 = (**(code **)(*(int *)(in_ECX[2] + 0x28 + *(int *)(*(int *)(in_ECX[2] + 0x28) + 0xc)) +
                          0x98))(puVar4,param_1,0x101,0,0,0,0,&DAT_0095c898,&DAT_0095c8a8);
      FUN_00535770(0,uVar3,puVar4,param_1,uVar5,uVar6,uVar7,uVar8,uVar9,puVar10);
      FUN_00529f40(local_68,0);
      uVar1 = local_70;
      local_8 = 0xffffffff;
      FUN_005123f0();
      ExceptionList = local_10;
      return uVar1;
    }
    if (*(short *)(*in_ECX + 0xc + (uint)local_70 * 0x18) == 0) {
      if ((short)local_6c < 0) {
        local_6c = local_70;
      }
    }
    else {
      cVar2 = FUN_005034a0(param_1);
      if (cVar2 != '\0') {
        *(short *)(*in_ECX + 0xc + (uint)local_70 * 0x18) =
             *(short *)(*in_ECX + 0xc + (uint)local_70 * 0x18) + 1;
        ExceptionList = local_10;
        return local_70;
      }
    }
    local_70 = local_70 + 1;
  } while( true );
}

