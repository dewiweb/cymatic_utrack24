// rea decompile_all
// name: FUN_0016d2a8
// address: 0x16d2a8
// body: available
// range: 0x16d2a8-0x16d31f inclusive
// range: 0x16d33c-0x16d39f inclusive
// range: 0x16d608-0x16d983 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_0016d2a8(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  char local_8c;
  undefined1 auStack_88 [36];
  int *local_64;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  int *piStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  piStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  FUN_001bd96c(auStack_88);
  iVar3 = FUN_001bda20(auStack_88);
  if (iVar3 != 0) {
    local_64 = param_1 + 0x1b3;
    iVar9 = DAT_0016d984 + 8;
    iVar3 = DAT_0016d984 + 0x24;
    do {
      puVar4 = (uint *)FUN_001bd9f4(auStack_88);
      uVar8 = *puVar4 & 0xff;
      if (uVar8 != 7) {
        if (uVar8 < 8) {
          switch(uVar8) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 2:
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
switchD_0016d318_default:
          param_1[0x1e9] = param_1[0x1e9] + 1;
        }
        else if (uVar8 == 0x40) {
          FUN_0015521c(&local_140);
          uVar10 = FUN_0014ce34(&local_140,puVar4);
          if ((int)uVar10 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_0015fe34(param_1 + 0xfa,(int)((ulonglong)uVar10 >> 0x20),local_128,local_124);
          }
          FUN_00155254(&local_140);
        }
        else if (uVar8 < 0x41) {
          if (uVar8 == 8) {
            FUN_00153fa8(&local_f0);
            iVar5 = FUN_0014ce34(&local_f0,puVar4);
            if (iVar5 == 0) {
              param_1[0x1e8] = param_1[0x1e8] + 1;
            }
            else {
              FUN_00171e20(auStack_50,auStack_94);
              uVar2 = local_a0;
              local_134 = local_98;
              local_12c = local_9c;
              local_13c = local_a4;
              local_138 = local_a8;
              local_130 = local_ac;
              local_140 = local_b4;
              FUN_001726d4(auStack_60,auStack_c0);
              FUN_001726d4(auStack_3c,auStack_cc);
              FUN_001726d4(auStack_48,auStack_d8);
              uVar6 = local_130;
              local_128 = local_134;
              local_124 = auStack_50;
              local_120 = (uint)(local_8c != '\0');
              local_134 = local_13c;
              local_130 = uVar2;
              local_13c = uVar6;
              FUN_00168ae4(param_1 + 0x128,local_28,auStack_48,auStack_3c,auStack_60,local_140);
              FUN_00171ea4(auStack_50);
            }
            FUN_00154024(&local_f0);
          }
          else {
            if (uVar8 != 0x20) goto switchD_0016d318_default;
            if ((*puVar4 & 0x40000) != 0) {
              FUN_00153c10(&local_140);
              iVar5 = FUN_0014ce34(&local_140,puVar4);
              if (iVar5 == 0) {
                param_1[0x1e8] = param_1[0x1e8] + 1;
              }
              else {
                FUN_001512cc(&local_f0);
                thunk_FUN_0014cd1c(auStack_60,param_1 + 0xfa);
                FUN_001bd898(auStack_60,&local_98);
                FUN_0014cd8c(auStack_60);
                FUN_001be270(auStack_90,param_1 + 0xfa);
                uVar6 = FUN_001beccc(auStack_90);
                FUN_001726d4(auStack_54,&local_128);
                FUN_0014ef48(&local_f0,local_12c._2_2_,auStack_54,DAT_0016d988,uVar6,&local_98);
                FUN_00171ea4(auStack_90);
                (**(code **)(*param_1 + 0x28))(param_1,&local_f0);
                FUN_0015111c(&local_f0);
                FUN_0014ca10(auStack_dc);
                FUN_0014ca10(auStack_e4);
                local_ec = 0;
                local_f0 = 0;
                local_e8 = 0;
              }
              FUN_00153c64(&local_140);
            }
          }
        }
        else if (uVar8 == 0xe0) {
          iVar5 = FUN_001c6b14(0x24,DAT_0016d98c);
          piVar7 = (int *)0x0;
          if (iVar5 != 0) {
            local_120 = *(uint *)(local_28 + 0x9c);
            piVar7 = (int *)FUN_00154154();
            piVar7[1] = iVar3;
            *piVar7 = iVar9;
            piVar7[8] = local_120;
          }
          iVar5 = FUN_0014ce34(piVar7,puVar4);
          if (iVar5 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 4))(piVar7);
            }
          }
          else if (piVar7 != (int *)0x0) {
            piVar7[2] = 0;
            piVar7[3] = 0;
            if (param_1[0x4f] == 0) {
              param_1[0x4e] = (int)piVar7;
            }
            else {
              piVar7[2] = param_1[0x4f];
              *(int **)(param_1[0x4f] + 0xc) = piVar7;
            }
            param_1[0x4f] = (int)piVar7;
            param_1[0x50] = param_1[0x50] + 1;
            thunk_EXT_FUN_0040010c(param_1 + 0x52);
          }
        }
        else {
          if (uVar8 != 0xf6) goto switchD_0016d318_default;
          FUN_001523a0(&local_140);
          iVar5 = FUN_0014ce34(&local_140,puVar4);
          if (iVar5 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            uVar1 = local_12c._2_1_;
            FUN_001f00bc(param_1 + 0xee);
            *(undefined1 *)((int)param_1 + 0x71a) = uVar1;
            FUN_00161b8c(local_64,uVar1);
            thunk_FUN_0014cd1c(&local_128,param_1 + 0xfa);
            local_124._0_2_ = CONCAT11(uVar1,(undefined1)local_124);
            FUN_0015f414(param_1 + 0xfa,&local_128);
            FUN_001f06d4(param_1 + 0xee);
            FUN_0014cd8c(&local_128);
          }
          FUN_001523d0(&local_140);
        }
      }
      FUN_001525d8(auStack_88);
      iVar5 = FUN_001bda20(auStack_88);
    } while (iVar5 != 0);
  }
  FUN_00152644(auStack_88);
  return;
}

