// rea decompile_all
// name: FUN_00106678
// address: 0x106678
// body: available
// range: 0x106678-0x106b8f inclusive
// range: 0x106bec-0x106c17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00106678(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  uVar2 = 0;
  FUN_000f4e84();
  uVar3 = FUN_000f4fc0();
  switch(param_2) {
  case 0x191:
    FUN_001a48f0(param_1,1,0);
    break;
  case 0x192:
    goto LAB_001069f0;
  case 0x193:
    break;
  case 0x194:
    goto LAB_001066dc;
  case 0x195:
LAB_001066dc:
    uVar2 = 1;
    break;
  case 0x196:
    goto LAB_001066f4;
  case 0x197:
    goto LAB_001066f4;
  case 0x198:
LAB_001066f4:
    FUN_001a48f0(param_1,0x34,0);
    break;
  case 0x199:
    if ((char)param_1[0x3b] != '\0') {
      FUN_00106d38(param_1);
      return 1;
    }
    iVar4 = FUN_0022e20c(param_1[0x3f]);
    if (iVar4 != 0) {
      iVar4 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
      cVar1 = *(char *)(iVar4 + 4);
      if (cVar1 == '\x01') {
        uVar3 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
        FUN_0023223c(param_1 + 0x41,uVar3);
        FUN_002443b0(param_1 + 0x35,param_1 + 0x32);
        FUN_002443b0(param_1 + 0x38,param_1 + 0x33);
        (**(code **)(*param_1 + 0x50))(param_1);
        return 0;
      }
      if (cVar1 == '\x02') {
        iVar4 = FUN_001b5998(uVar3);
        if (iVar4 != 0) {
          FUN_001070e4(param_1);
          return 0;
        }
        uVar5 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
        uVar5 = FUN_00232084(&local_28,uVar5);
        FUN_00095440(uVar3,uVar5);
        FUN_00232190(&local_28);
        FUN_001a48f0(param_1,5,0);
        return 1;
      }
      if (cVar1 == '\x04') {
        iVar4 = FUN_001b5998(uVar3);
        if (iVar4 != 0) {
          FUN_001070e4(param_1);
          return 0;
        }
        uVar5 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
        uVar5 = FUN_00232084(&local_28,uVar5);
        FUN_00095440(uVar3,uVar5);
        FUN_00232190(&local_28);
        FUN_001a48f0(param_1,5,0);
        return 1;
      }
      if (cVar1 != ' ') {
        return 0;
      }
      iVar4 = FUN_001b5b20(uVar3);
      if (iVar4 == 0) {
        uVar3 = FUN_0011eda0();
        FUN_0011ff88(uVar3,s_Not_allowed_during_Play_00106b94,&DAT_00106b90);
        uVar3 = FUN_0011eda0();
        FUN_000a1000(uVar3,0x1c);
        FUN_001d0130(1000);
        (**(code **)(*param_1 + 0x50))(param_1);
        return 1;
      }
      iVar4 = FUN_001b5998(uVar3);
      if (iVar4 != 0) {
        return 1;
      }
      uVar5 = FUN_0023b208(param_1[0x3f],param_1[0x32]);
      iVar4 = FUN_000bba3c(param_1 + 6,uVar5);
      if (iVar4 == 0) {
        FUN_00002898(s_ERROR__playlist_XML_file_loading_00106bac);
        return 1;
      }
      iVar4 = FUN_001b5844(uVar3);
      if (iVar4 == 0) {
        FUN_00093a74(uVar3,1);
        FUN_00093a14(uVar3,0xffffffff);
      }
      FUN_001a48f0(param_1,0x1f,0);
      FUN_000f4e84();
      uVar5 = FUN_000f4fb4();
      iVar4 = FUN_0006d818(uVar5);
      if (iVar4 != 1) {
        return 1;
      }
      local_28 = FUN_000aa570();
      uVar5 = FUN_000aa88c();
      local_28 = FUN_001b56e4(uVar3);
      FUN_0008b518(uVar5,local_28);
      return 1;
    }
    FUN_0022ed3c(param_1 + 0x25);
LAB_001069f0:
    if ((char)param_1[0x3b] == '\0') {
      uVar5 = FUN_00230e4c(&local_28);
      FUN_00231ef4(auStack_2c,&DAT_00106be4,uVar5);
      iVar4 = FUN_0022d2a0(param_1 + 0x40,auStack_2c);
      if (iVar4 == 0) {
        iVar4 = FUN_001b5998(uVar3);
        if (iVar4 == 0) {
          FUN_00232190(auStack_2c);
          uVar2 = 0;
        }
        else {
          FUN_001a48f0(param_1,0x34,0);
          FUN_001a48f0(param_1,1,0);
          *DAT_00106be8 = 1;
          FUN_00232190(auStack_2c);
          uVar2 = 1;
        }
      }
      else {
        iVar4 = FUN_0022cefc(param_1 + 0x40,&DAT_00106be4,0xffffffff);
        uVar3 = FUN_00230e4c(&local_28);
        FUN_00232050(auStack_30,uVar3);
        if (iVar4 != 0) {
          FUN_0022d1b0(auStack_34,param_1 + 0x40,0,iVar4);
          FUN_0023223c(auStack_30,auStack_34);
          FUN_00232190(auStack_34);
        }
        iVar4 = FUN_0022d150(auStack_30);
        if (iVar4 == 0) {
          uVar3 = FUN_00230e4c(auStack_38);
          uVar3 = FUN_00231ef4(auStack_34,&DAT_00106be4,uVar3);
          FUN_0023223c(param_1 + 0x41,uVar3);
          FUN_00232190(auStack_34);
        }
        else {
          FUN_0023223c(param_1 + 0x41,auStack_30);
        }
        (**(code **)(*param_1 + 0x50))(param_1);
        FUN_00232190(auStack_30);
        FUN_00232190(auStack_2c);
        uVar2 = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x3b) = 0;
      (**(code **)(*param_1 + 0x50))(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

