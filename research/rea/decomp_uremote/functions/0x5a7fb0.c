// rea decompile_all
// name: FUN_005a7fb0
// address: 0x5a7fb0
// body: available
// range: 0x5a7fb0-0x5a838e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a7fb0(ushort param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_c8 [12];
  int local_bc;
  undefined1 local_a8 [16];
  ushort local_98;
  short local_94;
  uint local_90;
  int local_8c;
  undefined1 local_88 [14];
  char local_7a;
  undefined1 local_78 [91];
  char local_1d;
  int local_1c;
  short local_18;
  ushort local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7b35;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 7;
  if ((*(uint *)(in_ECX + -0xe4) & 0x8000) == 0) {
    local_1c = 7;
  }
  else {
    FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_14 = (ushort)*(byte *)(in_ECX + -0x2c) * 0x18;
    local_18 = FUN_00558f30(0);
    if (local_18 == 0) {
      local_1c = 0x15;
    }
    else if ((param_1 < 0xffff) && (local_14 < param_1)) {
      local_1c = 0x1d;
    }
    else {
      FUN_00512300();
      local_8 = 0;
      local_1d = '\0';
      iVar2 = FUN_0052f3a0(local_18);
      if (iVar2 == 0) {
        local_8c = 0;
        FUN_00503bc0();
        for (local_90 = 0; local_90 < *(ushort *)(in_ECX + -0xfc); local_90 = local_90 + 1) {
          uVar3 = FUN_00559990(local_a8,local_90,&local_8c);
          FUN_00503de0(uVar3);
          cVar1 = FUN_00503fe0();
          if (((cVar1 == '\0') && (local_7a == '\0')) && (*(char *)(local_8c + 6) != '\0')) {
            local_94 = (short)((ulonglong)*(byte *)(in_ECX + -0x2c) %
                              (ulonglong)(longlong)(int)(uint)*(byte *)(local_8c + 6)) *
                       (short)((ulonglong)*(byte *)(local_8c + 6) %
                              (ulonglong)(longlong)(int)(uint)*(byte *)(in_ECX + -0x2c));
            if (local_94 == 0) {
              if (*(byte *)(local_8c + 6) < *(byte *)(in_ECX + -0x2c)) {
                local_98 = (ushort)((ulonglong)*(byte *)(in_ECX + -0x2c) /
                                   (ulonglong)(longlong)(int)(uint)*(byte *)(local_8c + 6));
                if ((int)((ulonglong)param_1 % (ulonglong)(longlong)(int)(uint)local_98) == 0) {
                  FUN_0052f410(local_88);
                  local_1d = '\x01';
                }
              }
              else {
                FUN_0052f410(local_88);
                local_1d = '\x01';
              }
            }
            else if ((int)((ulonglong)param_1 %
                          (ulonglong)(longlong)(int)(uint)*(byte *)(in_ECX + -0x2c)) == 0) {
              FUN_0052f410(local_88);
              local_1d = '\x01';
            }
          }
        }
        local_1c = 0;
      }
      else {
        local_1c = 0x17;
      }
      if ((local_1c == 0) && (local_1d != '\0')) {
        local_bc = FUN_005686d0();
        uVar4 = (uint)*(ushort *)(in_ECX + -0x5a);
        uVar3 = (**(code **)(*(int *)(local_bc + 0x28 + *(int *)(*(int *)(local_bc + 0x28) + 0xc)) +
                            0x98))(local_c8,uVar4,*(undefined4 *)(in_ECX + -0x128),
                                   *(undefined2 *)(in_ECX + -0x34),local_14,param_1);
        uVar3 = FUN_00503c30(uVar3,uVar4);
        cVar1 = FUN_0056bb40(local_78,uVar3);
        if (cVar1 != '\0') {
          FUN_00529f40(local_78,0);
        }
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    FUN_0054f6f0();
  }
  ExceptionList = local_10;
  return local_1c;
}

