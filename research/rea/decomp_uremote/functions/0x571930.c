// rea decompile_all
// name: FUN_00571930
// address: 0x571930
// body: available
// range: 0x571930-0x571bf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00571930(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [19];
  char local_1d;
  uint local_1c;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(in_ECX + 0xa0) != 0) {
    local_8 = FUN_005724a0();
  }
  *(undefined1 *)(in_ECX + 0xf3) = 0;
  FUN_0052f300();
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xd8);
  *(ushort *)(in_ECX + 0xe4) = -(ushort)(*(short *)(in_ECX + 0x7c) != 0) & 0x20 | 0x3784;
  *(undefined4 *)(in_ECX + 0xe0) = uVar3;
  puVar5 = local_3c;
  uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)) + 0x98))
                    (puVar5,*(undefined2 *)(in_ECX + 0xf0));
  FUN_00503c30(uVar3,puVar5);
  FUN_00503de0(local_18);
  if ((*(ushort *)(in_ECX + 0x7c) & 0x8000) != 0) {
    FUN_0052f620(1);
  }
  if ((*(ushort *)(in_ECX + 0x7c) & 1) != 0) {
    FUN_0052f560(*(undefined4 *)(in_ECX + 0x80));
  }
  if ((*(ushort *)(in_ECX + 0x7c) & 2) != 0) {
    FUN_0052f5c0(*(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
  }
  uVar2 = FUN_00558f30(1);
  iVar4 = FUN_0052f3a0(uVar2);
  if (iVar4 == 0) {
    for (local_1c = 0; local_1c < *(ushort *)(in_ECX + 0x6c); local_1c = local_1c + 1) {
      FUN_00559900(local_30,local_1c);
      local_1d = '\0';
      cVar1 = FUN_00503fe0();
      if (cVar1 == '\0') {
        cVar1 = FUN_00503cf0(param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_00559560(local_1c,&local_1d);
          if (cVar1 != '\0') {
            if (local_1d != '\0') {
              local_8 = 0xd;
            }
            iVar4 = FUN_0052f410(local_30);
            if (iVar4 != 0) {
              puVar5 = local_48;
              uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                                           *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc))
                                  + 0x98))(puVar5,*(undefined2 *)(in_ECX + 0xf0));
              FUN_00528280(0,uVar3,puVar5);
              local_8 = 0x17;
              break;
            }
          }
        }
      }
    }
  }
  else {
    local_8 = 0x17;
  }
  if (*(short *)(in_ECX + 0xaa) == 0) {
    *(undefined1 *)(in_ECX + 0xf3) = 1;
    local_8 = 0x15;
  }
  return local_8;
}

