// rea decompile_all
// name: FUN_00566970
// address: 0x566970
// body: available
// range: 0x566970-0x566dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00566970(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 local_60 [12];
  undefined1 local_54 [16];
  undefined1 local_44 [12];
  undefined1 local_38 [19];
  char local_25;
  uint local_24;
  undefined1 local_20 [19];
  char local_d;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if (*(int *)(in_ECX + 0x98) != 0) {
    local_8 = FUN_00567dc0();
  }
  *(byte *)(in_ECX + 0xfe) = *(byte *)(in_ECX + 0xfe) & 0xfe;
  FUN_0052f300();
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xd8);
  *(ushort *)(in_ECX + 0xdc) = -(ushort)(*(short *)(in_ECX + 0xf8) != 0) & 0x20 | 0x3784;
  *(undefined4 *)(in_ECX + 0xd8) = uVar3;
  uVar3 = FUN_00568670(local_38);
  FUN_00503de0(uVar3);
  if ((*(ushort *)(in_ECX + 0xf8) & 0x8000) != 0) {
    FUN_0052f620(1);
  }
  if ((*(ushort *)(in_ECX + 0xf8) & 1) != 0) {
    FUN_0052f560(*(undefined4 *)(in_ECX + 0x88));
  }
  if ((*(ushort *)(in_ECX + 0xf8) & 2) != 0) {
    FUN_0052f5c0(*(undefined4 *)(in_ECX + 0x80),*(undefined4 *)(in_ECX + 0x84));
  }
  local_8 = 0;
  uVar2 = FUN_00558f30(1);
  iVar4 = FUN_0052f3a0(uVar2);
  if (iVar4 == 0) {
    for (local_c = 0; local_c < *(ushort *)(in_ECX + 0x58); local_c = local_c + 1) {
      local_d = '\0';
      cVar1 = FUN_00559560(local_c,&local_d);
      if (cVar1 != '\0') {
        if (local_d != '\0') {
          local_8 = 0xd;
        }
        FUN_00559900(local_20,local_c);
        cVar1 = FUN_00503fe0();
        if (cVar1 == '\0') {
          FUN_0052f410(local_20);
        }
      }
    }
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 0xfa);
    uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x28 +
                                 *(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x28) + 0xc)) + 0x98))
                      (local_44,uVar5);
    FUN_00528280(0,uVar3,uVar5);
    local_8 = 0x17;
  }
  if (((*(byte *)(in_ECX + 0xfe) >> 1 & 1) != 0) && ((local_8 == 0 || (local_8 == 0xd)))) {
    uVar2 = FUN_00558f30(1);
    iVar4 = FUN_0052f450(uVar2);
    if (iVar4 == 0) {
      for (local_24 = 0; local_24 < *(ushort *)(in_ECX + 0x6c); local_24 = local_24 + 1) {
        local_25 = '\0';
        cVar1 = FUN_00559560(local_24,&local_25);
        if (cVar1 != '\0') {
          if (local_25 != '\0') {
            local_8 = 0xd;
          }
          uVar3 = FUN_00559900(local_54,local_24);
          FUN_0052f520(uVar3);
        }
      }
    }
    else {
      puVar6 = local_60;
      uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x28 +
                                   *(int *)(*(int *)(*(int *)(in_ECX + 0x74) + 0x28) + 0xc)) + 0x98)
              )(puVar6,*(undefined2 *)(in_ECX + 0xfa));
      FUN_00528280(1,uVar3,puVar6);
      local_8 = 0x18;
    }
  }
  if (((local_8 == 0) && (*(short *)(in_ECX + 0xa2) == 0)) && (*(short *)(in_ECX + 0xaa) == 0)) {
    local_8 = 0x15;
  }
  return local_8;
}

