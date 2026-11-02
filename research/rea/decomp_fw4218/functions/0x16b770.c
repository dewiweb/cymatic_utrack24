// rea decompile_all
// name: FUN_0016b770
// address: 0x16b770
// body: available
// range: 0x16b770-0x16b973 inclusive
// range: 0x16baa0-0x16bbb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016b770(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [68];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  bVar1 = false;
  bVar2 = false;
  puVar6 = (undefined *)0x0;
  uVar5 = 0;
  pcVar4 = (char *)0x0;
  FUN_00171e90(auStack_40);
  thunk_FUN_0014cd1c(auStack_30,param_1 + 0xfa);
  FUN_001bd8c4(auStack_38,auStack_30);
  uVar3 = FUN_001be9f0(auStack_38);
  FUN_00171828(auStack_40,uVar3);
  FUN_00171ea4(auStack_38);
  FUN_0014cd8c(auStack_30);
  FUN_00171b00(auStack_40,&DAT_0016b974);
  FUN_001be270(auStack_38,param_1 + 0xfa);
  uVar3 = FUN_001be9f0(auStack_38);
  FUN_00171b00(auStack_40,uVar3);
  FUN_00171ea4(auStack_38);
  FUN_00171b00(auStack_40,&DAT_0016b978);
  FUN_001512cc(&local_98);
  if (param_2 == 0x80) {
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Ethernet_Received_Failed_Packet_T_0016ba74;
    puVar6 = DAT_0016ba70;
  }
  else if (param_2 < 0x81) {
    if (param_2 == 8) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Send_Failed_Packet_too_l_0016b9dc;
      puVar6 = DAT_0016b9d8;
    }
    else if (param_2 < 9) {
      if (param_2 == 1) {
        bVar1 = true;
        bVar2 = true;
        puVar6 = &DAT_00006001;
        uVar5 = 0x1000;
        pcVar4 = s_Ethernet_Send_Queue_Full_0016b97c;
      }
      else if (param_2 == 2) {
        bVar1 = true;
        bVar2 = true;
        uVar5 = 0x1000;
        pcVar4 = s_Ethernet_Receive_Queue_Full_0016b99c;
        puVar6 = DAT_0016b998;
      }
      else if (param_2 == 4) {
        bVar2 = true;
        uVar5 = 0x1000;
        pcVar4 = s_Ethernet_Send_Failed_API_0016b9bc;
        puVar6 = DAT_0016b9b8;
      }
    }
    else if (param_2 == 0x10) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Message_List_Full_0016ba08;
      puVar6 = DAT_0016ba04;
    }
    else if (param_2 == 0x20) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Header_List_Full_0016ba28;
      puVar6 = DAT_0016ba24;
    }
    else if (param_2 == 0x40) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Received_Failed_Bad_Ver_0016ba48;
      puVar6 = DAT_0016ba44;
    }
  }
  else if (param_2 == 0x2000) {
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Ethernet_Received_Failed_Invalid_0016bc44;
    puVar6 = DAT_0016bc40;
  }
  else if (param_2 < 0x2001) {
    if (param_2 == 0x100) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Received_Failed_Packet_T_0016bbbc;
      puVar6 = DAT_0016bbb8;
    }
    else if (param_2 == 0x200) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Received_Failed_Loopbac_0016bbec;
      puVar6 = DAT_0016bbe8;
    }
    else if (param_2 == 0x1000) {
      bVar2 = true;
      uVar5 = 0x1000;
      pcVar4 = s_Ethernet_Received_Failed_Unknown_0016bc14;
      puVar6 = DAT_0016bc10;
    }
  }
  else if (param_2 == 0x4000) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  else if (param_2 == 0x40000) {
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Ethernet_Receive_Queue_Almost_Fu_0016bc70;
    puVar6 = DAT_0016bc6c;
  }
  else if (param_2 == 0x80000) {
    bVar2 = true;
    uVar5 = 0x1000;
    pcVar4 = s_Ethernet_Receive_Queue_Almost_Em_0016bc98;
    puVar6 = DAT_0016bc94;
  }
  if (bVar2 || bVar1) {
    uVar3 = FUN_001beccc(auStack_40);
    FUN_0014d948(&local_98,0,DAT_0016bcbc,0,puVar6,uVar5,pcVar4,uVar3);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_98);
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_98);
  }
  FUN_0015111c(&local_98);
  FUN_0014ca10(auStack_84);
  FUN_0014ca10(auStack_8c);
  local_94 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_00171ea4(auStack_40);
  return;
}

