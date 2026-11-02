// rea decompile_all
// name: FUN_000200bc
// address: 0x200bc
// body: available
// range: 0x200bc-0x202d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000200bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                char *param_5,char *param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_368 [256];
  undefined1 auStack_268 [256];
  undefined1 auStack_168 [256];
  undefined1 auStack_68 [68];
  undefined4 *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  char *local_18;
  
  local_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  if ((*param_4 == '\0') || (iVar1 = FUN_00024928(auStack_68,param_4), iVar1 == 0)) {
    pcVar4 = s___Bad_Instance_Name_000202e2 + 2;
    iVar1 = DAT_00020324;
  }
  else if ((*param_5 == '\0') || (iVar1 = FUN_0002495a(auStack_268,param_5), iVar1 == 0)) {
    pcVar4 = s_Bad_Service_Type_000202f8;
    iVar1 = DAT_00020324;
  }
  else if ((*param_6 == '\0') || (iVar1 = FUN_0002495a(auStack_168,param_6), iVar1 == 0)) {
    pcVar4 = s_Bad_Domain_0002030c;
    iVar1 = DAT_00020324;
  }
  else {
    iVar1 = FUN_0001e5b8(auStack_368,auStack_68,auStack_268,auStack_168);
    if (iVar1 == 0) {
      pcVar4 = s_Bad_Name_00020318;
      iVar1 = DAT_00020324;
    }
    else {
      puVar2 = (undefined4 *)FUN_001952a0(DAT_000202d4);
      if (puVar2 == (undefined4 *)0x0) {
        pcVar4 = s_No_memory_00020364;
        iVar1 = DAT_00020360;
      }
      else {
        *puVar2 = DAT_000202d8;
        puVar2[1] = param_7;
        puVar2[2] = param_8;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[9] = 0xffffffff;
        puVar10 = _DAT_000202e0;
        puVar2[0x4a] = *DAT_000202dc;
        uVar6 = puVar10[1];
        uVar7 = puVar10[2];
        uVar8 = puVar10[3];
        puVar2[0x4b] = *puVar10;
        puVar2[0x4c] = uVar6;
        puVar2[0x4d] = uVar7;
        puVar2[0x4e] = uVar8;
        puVar2[0x4f] = puVar10[4];
        puVar9 = auStack_268;
        uVar3 = FUN_00020a0a(auStack_368);
        if (uVar3 < 0x101) {
          FUN_001952f0(puVar2 + 0x51,auStack_368,uVar3);
        }
        else {
          *(undefined1 *)(puVar2 + 0x51) = 0;
        }
        *(undefined2 *)(puVar2 + 0x91) = 0x21;
        *(undefined2 *)((int)puVar2 + 0x246) = 1;
        puVar2[0x92] = 0;
        puVar2[0x94] = 0;
        puVar2[0x95] = 0;
        puVar2[0x93] = 1;
        puVar2[0x96] = 0;
        *(undefined1 *)((int)puVar2 + 0x262) = 0;
        *(undefined1 *)((int)puVar2 + 0x263) = 0;
        puVar2[0x97] = 0;
        *(undefined1 *)(puVar2 + 0x98) = 0;
        *(undefined1 *)((int)puVar2 + 0x261) = 0;
        puVar2[0x9a] = 0;
        uVar6 = DAT_00020370;
        puVar2[0x9c] = puVar2;
        puVar2[0x9b] = uVar6;
        puVar2[0xa1] = 0xffffffff;
        puVar2[0xe2] = *DAT_000202dc;
        uVar6 = puVar10[1];
        uVar7 = puVar10[2];
        uVar8 = puVar10[3];
        puVar2[0xe3] = *puVar10;
        puVar2[0xe4] = uVar6;
        puVar2[0xe5] = uVar7;
        puVar2[0xe6] = uVar8;
        puVar2[0xe7] = puVar10[4];
        uVar3 = FUN_00020a0a(auStack_368,puVar9);
        if (uVar3 < 0x101) {
          FUN_001952f0(puVar2 + 0xe9,auStack_368,uVar3);
        }
        else {
          *(undefined1 *)(puVar2 + 0xe9) = 0;
        }
        *(undefined2 *)(puVar2 + 0x129) = 0x10;
        *(undefined2 *)((int)puVar2 + 0x4a6) = 1;
        puVar2[0x12a] = 0;
        puVar2[300] = 0;
        puVar2[0x12d] = 0;
        puVar2[299] = 1;
        puVar2[0x12e] = 0;
        *(undefined1 *)((int)puVar2 + 0x4c2) = 0;
        *(undefined1 *)((int)puVar2 + 0x4c3) = 0;
        puVar2[0x12f] = 0;
        *(undefined1 *)(puVar2 + 0x130) = 0;
        *(undefined1 *)((int)puVar2 + 0x4c1) = 0;
        puVar2[0x132] = 0;
        uVar6 = DAT_00020370;
        puVar2[0x134] = puVar2;
        puVar2[0x133] = uVar6;
        puVar10 = puVar2 + 5;
        iVar1 = FUN_00199920(DAT_00020374);
        iVar5 = DAT_00020378;
        if (iVar1 == 0) {
          iVar5 = (int)puVar2 + DAT_00020378;
          iVar1 = FUN_00199920(DAT_00020374);
          if (iVar1 == 0) {
            *local_24 = puVar2;
            return 0;
          }
          if (-1 < (int)puVar2[9]) {
            FUN_0019a1f8(DAT_00020374,puVar10);
          }
          if (-1 < (int)puVar2[0xa1]) {
            FUN_0019a1f8(DAT_00020374,iVar5);
          }
          FUN_00195340(puVar2);
          pcVar4 = s_mDNS_StartQuery_qTXT_00020394;
        }
        else {
          if (-1 < (int)puVar2[9]) {
            FUN_0019a1f8(DAT_00020374,puVar10);
          }
          if (-1 < (int)puVar2[0xa1]) {
            FUN_0019a1f8(DAT_00020374,(int)puVar2 + iVar5);
          }
          FUN_00195340(puVar2);
          pcVar4 = s_mDNS_StartQuery_qSRV_0002037c;
        }
      }
    }
  }
  FUN_00024642(0,s_DNSServiceResolve___s_____s______00020328,local_18,param_5,param_6,pcVar4,iVar1);
  return iVar1;
}

