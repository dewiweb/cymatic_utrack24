// rea decompile_all
// name: FUN_0019569c
// address: 0x19569c
// body: available
// range: 0x19569c-0x195865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0019569c(undefined4 param_1,short *param_2,short *param_3,undefined4 param_4,undefined2 *param_5
            ,short *param_6,ushort param_7,byte *param_8,int param_9)

{
  short sVar1;
  undefined2 uVar2;
  short *psVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_48;
  short *local_44;
  short *local_40;
  undefined2 local_3c;
  short *local_38;
  short *local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_24;
  short *psStack_20;
  short *local_1c;
  undefined4 local_18;
  
  local_30 = (uint)(ushort)param_2[5];
  iVar7 = (int)param_2 + DAT_00195868;
  local_44 = param_2 + 6;
  local_48 = (undefined2 *)((int)param_3 + (-0xc - (int)param_2));
  local_24 = param_1;
  psStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((local_44 <= param_3) && ((int)local_48 <= DAT_0019586c)) {
    local_48 = (undefined2 *)iVar7;
    psVar3 = (short *)FUN_001aa82c(param_1,param_2,param_3,param_9);
    if (psVar3 == (short *)0x0) {
      local_48 = (undefined2 *)iVar7;
      FUN_00024642(0,s_mDNSSendDNSMessage__putHINFO_fai_001958dc,local_44,local_1c);
      psVar3 = local_1c;
    }
    local_1c = psVar3;
    sVar1 = param_2[2];
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_2 + 5);
    *(char *)((int)param_2 + 5) = (char)sVar1;
    sVar1 = param_2[3];
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_2 + 7);
    *(char *)((int)param_2 + 7) = (char)sVar1;
    sVar1 = param_2[4];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_2 + 9);
    *(char *)((int)param_2 + 9) = (char)sVar1;
    sVar1 = param_2[5];
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_2 + 0xb);
    *(char *)((int)param_2 + 0xb) = (char)sVar1;
    if (param_9 != 0) {
      FUN_0001f1ac(param_2,&local_1c,param_9,0);
    }
    local_2c = (uint)param_7;
    if (local_1c == (short *)0x0) {
      FUN_00024642(0,s_mDNSSendDNSMessage__DNSDigest_Si_00195918);
      uVar4 = DAT_0019594c;
    }
    else if (param_8 == (byte *)0x0) {
      local_40 = (short *)CONCAT22(local_40._2_2_,param_7);
      local_44 = param_6;
      local_48 = param_5;
      uVar4 = FUN_00195408(local_24,param_2,local_1c,local_18);
    }
    else {
      uVar8 = (int)local_1c - (int)param_2 & 0xffff;
      local_48._0_2_ = CONCAT11((char)uVar8,(char)(uVar8 >> 8));
      iVar7 = FUN_00195606(param_8,&local_48,2);
      if (iVar7 == 2) {
        uVar5 = FUN_00195606(param_8,param_2,uVar8);
        uVar4 = 0;
        if (uVar5 != uVar8) {
          FUN_00024642(0,s_mDNSSendDNSMessage__write_msg_bo_00195950,uVar5,uVar8);
          uVar4 = DAT_001958d8;
        }
      }
      else {
        FUN_00024642(0,s_mDNSSendDNSMessage__write_msg_le_001958a4,iVar7,2);
        uVar4 = DAT_001958d8;
      }
    }
    sVar1 = param_2[2];
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_2 + 5);
    *(char *)((int)param_2 + 5) = (char)sVar1;
    sVar1 = param_2[3];
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_2 + 7);
    *(char *)((int)param_2 + 7) = (char)sVar1;
    sVar1 = param_2[4];
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_2 + 9);
    *(char *)((int)param_2 + 9) = (char)sVar1;
    sVar1 = param_2[5];
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_2 + 0xb);
    *(char *)((int)param_2 + 0xb) = (char)sVar1;
    if ((*DAT_00195980 != 0) && (*param_2 != 0)) {
      if (param_5 == (undefined2 *)0x0) {
        uVar2 = *DAT_00195984;
      }
      else {
        uVar2 = *param_5;
      }
      local_34 = local_1c;
      local_3c = (undefined2)local_2c;
      local_40 = param_6;
      local_44 = (short *)CONCAT22(local_44._2_2_,uVar2);
      local_48 = (undefined2 *)0x0;
      if (param_8 == (byte *)0x0) {
        puVar6 = &DAT_0019598c;
      }
      else if ((*param_8 & 1) == 0) {
        puVar6 = &DAT_00195990;
      }
      else {
        puVar6 = &DAT_00195988;
      }
      local_38 = param_2;
      FUN_00020a30(local_24,uVar4,1,puVar6);
    }
    *(char *)(param_2 + 5) = (char)local_30;
    *(char *)((int)param_2 + 0xb) = (char)(local_30 >> 8);
    return uVar4;
  }
  FUN_00024642(0,s_mDNSSendDNSMessage__invalid_mess_00195870,local_44,param_3);
  return DAT_001958a0;
}

