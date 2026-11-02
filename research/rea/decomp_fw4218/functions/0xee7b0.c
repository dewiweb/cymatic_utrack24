// rea decompile_all
// name: FUN_000ee7b0
// address: 0xee7b0
// body: available
// range: 0xee7b0-0xee8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ee7b0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  int local_94;
  code *local_90;
  uint local_8c;
  undefined4 *local_88;
  int local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  code *local_44;
  int local_40;
  uint local_38;
  uint local_34;
  undefined4 local_28;
  int local_24;
  int iStack_20;
  undefined4 *puStack_1c;
  uint local_18;
  
  puVar5 = *(undefined4 **)(param_1 + 0x188);
  iStack_20 = param_1;
  puStack_1c = param_2;
  local_18 = param_3;
  if (*(undefined4 **)(param_1 + 0x18c) != puVar5) {
    local_28 = DAT_000ee900;
    local_24 = DAT_000ee904[3] >> 1;
    local_50 = &local_80;
    local_4c = DAT_000ee908;
    local_48 = DAT_000ee90c;
    do {
      piVar6 = (int *)*puVar5;
      if (*(char *)(puVar5 + 2) == '\0') {
        local_34 = DAT_000ee904[3];
        local_44 = (code *)DAT_000ee904[2];
        local_38 = local_18;
        local_40 = puVar5[1];
        piVar2 = (int *)FUN_001cfb1c();
        if (piVar2 == piVar6 + 1) {
          piVar6 = (int *)(local_24 + local_40);
          puVar1 = param_2;
          uVar3 = local_38;
          pcVar4 = local_44;
          if ((local_34 & 1) != 0) {
            pcVar4 = *(code **)(local_44 + *piVar6);
          }
          goto LAB_000ee85e;
        }
        local_94 = local_40;
        local_98 = local_4c;
        local_8c = local_34;
        local_90 = local_44;
        local_84 = CONCAT31(local_84._1_3_,(char)local_38);
        local_80 = local_48;
        local_44 = (code *)(local_50 + 1);
        local_7c = 0;
        local_88 = param_2;
        FUN_001ce8fc(local_44,DAT_000ee910,0,0);
        thunk_EXT_FUN_00400100(local_44);
        (**(code **)(*piVar6 + 0x2c))(piVar6,&local_98,0xffffffff);
        thunk_EXT_FUN_004001ec(local_50 + 1,0xffffffff);
        local_98 = local_4c;
        local_80 = local_48;
        FUN_001ce98c(local_50 + 1);
      }
      else {
        local_88 = (undefined4 *)*DAT_000ee904;
        local_84 = DAT_000ee904[1];
        local_7c = local_18;
        local_8c = 0xffffffff;
        local_94 = puVar5[1];
        puVar1 = (undefined4 *)FUN_001f01c4(0x18,1);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = local_94;
          *puVar1 = local_28;
          puVar1[4] = param_2;
          puVar1[3] = local_84;
          puVar1[2] = local_88;
          *(char *)(puVar1 + 5) = (char)local_7c;
        }
        uVar3 = local_8c;
        pcVar4 = *(code **)(*piVar6 + 0x2c);
LAB_000ee85e:
        (*pcVar4)(piVar6,puVar1,uVar3);
      }
      puVar5 = puVar5 + 3;
    } while (*(undefined4 **)(param_1 + 0x18c) != puVar5);
  }
  local_a8 = 0;
  local_a6 = (undefined2)local_18;
  local_a0 = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x194);
  local_a4 = param_2;
  if (*(undefined4 **)(param_1 + 0x198) != puVar5) {
    do {
      thunk_EXT_FUN_004005e0(*puVar5,&local_a8,0);
      puVar5 = puVar5 + 1;
    } while (*(undefined4 **)(param_1 + 0x198) != puVar5);
  }
  return;
}

