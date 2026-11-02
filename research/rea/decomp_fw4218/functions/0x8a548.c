// rea decompile_all
// name: FUN_0008a548
// address: 0x8a548
// body: available
// range: 0x8a548-0x8a7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008a548(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int local_5c;
  undefined1 auStack_58 [36];
  uint local_34;
  int local_30;
  int local_2c;
  
  local_70 = (undefined4 *)0x0;
  local_6c = (int *)0x0;
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = (int *)0x0;
  local_5c = 0;
  puVar4 = (undefined4 *)FUN_00173860(0xc,0);
  uVar5 = FUN_00173860(0x10,0);
  puVar4[2] = uVar5;
  *puVar4 = local_70;
  puVar4[1] = 1;
  local_60 = (int *)puVar4[2];
  iVar9 = 2;
  local_68 = local_60 + 4;
  *local_60 = (int)local_60;
  local_60[1] = (int)local_60;
  local_70 = puVar4;
  local_64 = local_68;
  if (param_3 != 0) {
    iVar9 = FUN_00003258(*param_2);
    if (iVar9 < 0xb) {
      if (iVar9 < 1) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 10;
    }
  }
  local_30 = 1;
  if ((1 < param_3) && (local_30 = FUN_00003258(param_2[1]), 1 < local_30)) {
    FUN_00002898(s__c_2J_0008a800,0x1b);
    FUN_00002898(&DAT_0008a808,0x1b);
  }
  uVar3 = DAT_0008a814;
  uVar2 = DAT_0008a810;
  local_2c = iVar9 * 1000;
  do {
    FUN_001ee778(local_2c,&local_34,&local_70);
    piVar10 = (int *)*local_60;
    if (piVar10 != local_60) {
      do {
        uVar11 = piVar10[3];
        iVar9 = piVar10[2];
        uVar6 = uVar11;
        uVar8 = local_34;
        if (DAT_0008a818 < uVar11) {
          uVar6 = (uint)((ulonglong)uVar11 * (ulonglong)uVar3 >> 0x2d);
          uVar8 = (uint)((ulonglong)local_34 * (ulonglong)uVar3 >> 0x2d);
        }
        uVar6 = FUN_00006604(DAT_0008a810 * uVar6,uVar8);
        if (uVar2 < uVar6) {
          uVar6 = uVar2;
        }
        uVar8 = (uint)((ulonglong)(uVar6 * 0x23) * (ulonglong)uVar3 >> 0x2d);
        FUN_00003c08(auStack_58,uVar8,0x23);
        uVar1 = (uint)((ulonglong)uVar6 * (ulonglong)_DAT_0008a81c >> 0x25);
        auStack_58[uVar8] = 0;
        FUN_00002898(s_Q_25_25s___2d__02d____36s___lu__0008a81f + 1,iVar9,uVar1,uVar6 + uVar1 * -100
                     ,auStack_58,uVar11);
        piVar10 = (int *)*piVar10;
      } while (piVar10 != local_60);
    }
    if (1 < local_30) {
      FUN_00002898(&DAT_0008a808,0x1b);
    }
    local_30 = local_30 + -1;
  } while (0 < local_30);
  if (local_60 != (int *)0x0) {
    piVar10 = (int *)*local_60;
    while (piVar7 = piVar10, piVar7 != local_60) {
      piVar10 = local_60;
      if (piVar7 != local_60) {
        piVar10 = (int *)*piVar7;
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
        local_5c = local_5c + -1;
        *piVar7 = (int)local_6c;
        local_6c = piVar7;
      }
    }
    *local_60 = (int)local_6c;
    local_6c = local_60;
    piVar10 = local_70;
    while (piVar10 != (int *)0x0) {
      local_70 = (undefined4 *)*piVar10;
      FUN_00173a54(piVar10[2],piVar10[1],0);
      FUN_00173a54(piVar10,1,0);
      piVar10 = local_70;
    }
  }
  return 0;
}

