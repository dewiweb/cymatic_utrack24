// rea decompile_all
// name: FUN_000e7b1c
// address: 0xe7b1c
// body: available
// range: 0xe7b1c-0xe7f6b inclusive
// range: 0xe7fb0-0xe825b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7b1c(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_000f4e84();
  uVar3 = FUN_000f4fc0();
  FUN_000f4e84();
  local_28 = FUN_000f4fb4();
  FUN_000f4e84();
  local_2c = FUN_000f5150();
  FUN_000f4e84();
  local_30 = FUN_000f5144();
  iVar4 = FUN_000bc47c(param_1 + 5);
  if (iVar4 == 0) {
    (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcf,0);
  }
  FUN_000aa570();
  uVar5 = FUN_000aa88c();
  FUN_0008b1ec(uVar5,param_1 + 0x27);
  FUN_000e5a90(param_1);
  bVar1 = false;
  if ((param_1[0x2a] != 0) && (*(char *)(DAT_000e7f6c + 0x88) != '\0')) {
    *(undefined1 *)(DAT_000e7f6c + 0x88) = 0;
    uVar6 = FUN_0022cefc(DAT_000e7f6c,&DAT_000e7f70,0xffffffff);
    FUN_0022d1b0(&local_34,DAT_000e7f6c,0,uVar6);
    FUN_0023223c(DAT_000e7f74,&local_34);
    FUN_00232190(&local_34);
    FUN_0023223c(DAT_000e7f78,DAT_000e7f6c);
    bVar1 = true;
    FUN_00094f64(uVar3,1);
  }
  iVar4 = FUN_000bc47c(param_1 + 5);
  if (iVar4 == 0) {
    FUN_00083e6c(param_1 + 5);
  }
  FUN_000e39b4(param_1);
  FUN_000e39e4(param_1);
  if (((param_1[0x2a] == 0x3b) || (param_1[0x2a] == 0x3c)) || (param_1[0x2a] == 0x16)) {
    FUN_0011eda0();
    FUN_0011f8a0();
    uVar6 = FUN_0011eda0();
    FUN_0011f5a8(uVar6,0,0,1);
  }
  bVar2 = false;
  if ((param_1[0x2a] == 0x3b) || (param_1[0x2a] == 0x16)) {
    switch(*_DAT_000e7f7c) {
    case '\0':
      if ((bVar1) || (iVar4 = FUN_000815bc(param_1 + 5,0), iVar4 != 0)) {
        bVar2 = true;
      }
      break;
    case '\x01':
      if (!bVar1) {
        FUN_000815bc(param_1 + 5,0);
      }
      bVar2 = true;
      break;
    case '\x02':
      bVar2 = true;
      break;
    case '\x03':
      if ((!bVar1) && (iVar4 = FUN_000815bc(param_1 + 5,1), iVar4 == 0)) {
        FUN_00002898(s____TRACE__Last_Song_in_the_List_r_000e7f7d + 3);
      }
      bVar2 = true;
      break;
    case -1:
      if (!bVar1) {
        FUN_000815bc(param_1 + 5,0);
      }
    }
    FUN_000bb774(param_1 + 5,DAT_000e7fa8 + -0x10);
    FUN_00085cdc(param_1 + 5);
    FUN_001a7f24(&local_3c);
    local_48 = 1;
    (**(code **)(param_1[5] + 8))
              (param_1 + 5,*(undefined4 *)(DAT_000e7f78 + 0x40),*(undefined4 *)(DAT_000e7f78 + 0x44)
               ,*(undefined4 *)(DAT_000e7f78 + 0x48),local_3c,local_38,local_34,0);
    FUN_00084d48(param_1 + 5);
    if (bVar2) {
      FUN_000e5dcc(param_1);
    }
    if (*_DAT_000e7f7c == -1) {
      FUN_000e7750(param_1);
    }
  }
  if (*DAT_000e7fac == '\0') {
    (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x12,0,500,500);
  }
  iVar4 = FUN_0006d818(local_28);
  if (iVar4 == 1) {
    iVar4 = FUN_001b4f20(uVar5);
    if (iVar4 == 4) {
      FUN_0006de44(local_28,0);
      (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x1e,0,500,500);
    }
    FUN_0008bd04(uVar5,(int)*_DAT_000e7f7c);
    uVar6 = FUN_001b6f0c(local_2c);
    FUN_0008b998(uVar5,uVar6);
    uVar6 = FUN_001b557c(uVar3);
    FUN_0008c990(uVar5,uVar6);
    FUN_00178f04();
    iVar4 = FUN_001776cc();
    if (iVar4 != 0) {
      uVar6 = FUN_00178f04();
      FUN_00176e14(uVar6,&local_34,&local_38,&local_3c);
      uVar6 = FUN_00178f04();
      FUN_00176e40(uVar6,local_40,local_44,&local_48);
      FUN_0008b9d0(uVar5,local_34 & 0xff,local_38 & 0xff,local_3c & 0xff,local_40[0],local_44[0],
                   local_48 & 0xff);
    }
  }
  else if ((iVar4 == 2) && (iVar4 = FUN_001b4f08(uVar5), iVar4 != 2)) {
    FUN_0006de44(local_28,0);
    uVar5 = FUN_000aa570();
    FUN_000aaf30(uVar5,0);
    (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x1e,0,500,500);
  }
  if (*DAT_000e825c == '\0') {
    *DAT_000e825c = '\x01';
    iVar4 = FUN_0006d818(local_28);
    iVar7 = FUN_001b6eac(local_30);
    if (iVar7 != 0) {
      uVar5 = FUN_00230e4c(&local_34);
      FUN_00232050(&local_38,uVar5);
      FUN_0023219c(&local_38,u___PLAYLISTS_autoplay_play_000e8260);
      iVar7 = FUN_000bba3c(param_1 + 5,&local_38);
      if (iVar7 == 0) {
        FUN_0023219c(&local_38,DAT_000e8294);
        iVar7 = FUN_000bba3c(param_1 + 5,&local_38);
        if (iVar7 == 0) {
          FUN_0023219c(&local_38,u__Music__PLAYLISTS_autoplay_play_000e8298);
          iVar4 = FUN_000bba3c(param_1 + 5,&local_38);
          if (iVar4 != 0) {
            FUN_001a48f0(param_1,2,0);
          }
        }
        else {
          FUN_001a48f0(param_1,2,0);
          if (iVar4 == 1) {
            local_3c = FUN_000aa570();
            uVar5 = FUN_000aa88c();
            local_3c = FUN_001b56e4(uVar3);
            FUN_0008b518(uVar5,local_3c);
          }
        }
      }
      else {
        FUN_001a48f0(param_1,2,0);
        if (iVar4 == 1) {
          local_3c = FUN_000aa570();
          uVar5 = FUN_000aa88c();
          local_3c = FUN_001b56e4(uVar3);
          FUN_0008b518(uVar5,local_3c);
        }
      }
      FUN_00232190(&local_38);
    }
  }
  *DAT_000e82d8 = 0;
  *DAT_000e82dc = 0;
  *DAT_000e82e0 = 0;
  FUN_00093574(uVar3,0);
  (**(code **)(*(int *)param_1[0x29] + 0x24))((int *)param_1[0x29],0x18,0,DAT_000e82e4,DAT_000e82e4)
  ;
  FUN_00093300(uVar3,0);
  FUN_0009444c(uVar3,0);
  uVar3 = FUN_000dfcb0();
  FUN_000e08ec(uVar3,1);
  FUN_000bddb8(param_1 + 5);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_0008211c(param_1 + 5,*DAT_000e7fac);
  if ((char)param_1[0x33] != '\0') {
    *(undefined1 *)(param_1 + 0x33) = 0;
    FUN_000bdd08(param_1 + 5);
    FUN_000e7750(param_1);
  }
  if (*DAT_000e82e8 == '\0') {
    *DAT_000e82e8 = '\x01';
    FUN_000aa570();
    FUN_000aff40();
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}

