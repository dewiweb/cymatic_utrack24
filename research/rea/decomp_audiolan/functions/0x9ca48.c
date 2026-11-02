// rea decompile_all
// name: FUN_0009ca48
// address: 0x9ca48
// body: available
// range: 0x9ca48-0x9ccf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009ca48(int param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  byte local_b8 [4];
  ushort auStack_b4 [30];
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  int local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  puStack_2c = param_2;
  uStack_28 = param_3;
  iVar5 = FUN_0018e28c(*param_2,&local_64);
  if (iVar5 == 0) {
    FUN_000028a4(s_Invalid_IP_address___s__0009cd10,*param_2);
    return 0;
  }
  iVar5 = FUN_00191ed0(2,3,1);
  if (iVar5 < 0) {
    FUN_000028a4(s_Could_not_create_socket_0009ccf4);
  }
  else {
    local_5c = 1000;
    FUN_00191b64(iVar5,DAT_0009cd2c + -7,DAT_0009cd2c,&local_5c,4);
    uVar2 = DAT_0009cd30;
    local_60 = 4;
    do {
      FUN_000028a4(s_Sending_ping____0009cd34);
      iVar6 = FUN_001b0d68();
      iVar11 = local_30;
      puVar7 = (undefined1 *)FUN_0019c794(0x28);
      if (puVar7 == (undefined1 *)0x0) break;
      *puVar7 = 8;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = (char)uVar2;
      puVar7[5] = (char)(uVar2 >> 8);
      pcVar12 = puVar7 + 7;
      uVar10 = *(ushort *)(iVar11 + 0x14) + 1 & 0xfffeffff;
      iVar8 = uVar10 + 1;
      *(short *)(iVar11 + 0x14) = (short)iVar8;
      puVar7[6] = (char)(uVar10 >> 8);
      puVar7[7] = (char)((uint)(iVar8 * 0x100) >> 8);
      cVar3 = '\0';
      iVar11 = 0x10;
      do {
        cVar13 = cVar3 + '\x01';
        pcVar12[1] = cVar3;
        iVar11 = iVar11 + -1;
        cVar3 = cVar3 + '\x02';
        pcVar12 = pcVar12 + 2;
        *pcVar12 = cVar13;
      } while (iVar11 != 0);
      uVar4 = FUN_0018d5b0(puVar7,0x28);
      puVar7[2] = (char)uVar4;
      puVar7[3] = (char)((ushort)uVar4 >> 8);
      local_58 = 0x10;
      local_57 = 2;
      local_54 = local_64;
      iVar11 = FUN_001919e8(iVar5,puVar7,0x28,0,&local_58,0x10);
      FUN_0019c4f8(puVar7);
      if (iVar11 == 0) break;
      FUN_000028a4(s_Waiting_for_reply____0009cd48);
      uVar1 = *(ushort *)(local_30 + 0x14);
      iVar11 = FUN_00191180(iVar5,local_b8,0x40,0,auStack_78,auStack_48);
      if (0 < iVar11) {
        do {
          if (0x1b < iVar11) {
            local_4c = local_74;
            iVar11 = FUN_001b0d68();
            uVar9 = FUN_0018e4b4(&local_4c,auStack_40,0x10);
            FUN_000028a4(s_ping_received_from__s___u_ms__0009cd60,uVar9,iVar11 - iVar6);
            if ((auStack_b4[(local_b8[0] & 0xf) * 2] == uVar2) &&
               ((ushort)(uVar1 >> 8 | uVar1 << 8) == auStack_b4[(local_b8[0] & 0xf) * 2 + 1])) {
              FUN_000028a4(s_ping_OK_0009cd80);
              goto LAB_0009ccc8;
            }
            FUN_000028a4(s_ping_dropped_0009cd8c);
          }
          iVar11 = FUN_00191180(iVar5,local_b8,0x40,0,auStack_78,auStack_48);
        } while (0 < iVar11);
      }
      iVar11 = FUN_001b0d68();
      FUN_000028a4(s_ping_timed_out___u_ms__0009cd9c,iVar11 - iVar6);
LAB_0009ccc8:
      FUN_001b0cec(1000);
      local_60 = local_60 + -1;
    } while (local_60 != 0);
    FUN_00190b04(iVar5);
  }
  return 0;
}

