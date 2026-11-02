// rea decompile_all
// name: FUN_0019a8dc
// address: 0x19a8dc
// body: available
// range: 0x19a8dc-0x19aa01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019a8dc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_98 [132];
  
  piVar1 = DAT_0019aa58;
  local_98[0] = 0;
  uVar5 = 1;
  if (*(char *)(param_1 + 0x119) != '\0') {
    if (*(int *)(param_1 + 0x3638) == 0) {
      for (piVar4 = *(int **)(&DAT_00001fb8 + param_1); piVar4 != (int *)0x0;
          piVar4 = (int *)*piVar4) {
        if (((*(short *)((int)piVar4 + 6) == 0x21) &&
            (((piVar4[7] != *piVar1 || (*(char *)((int)piVar4 + 0x46) != '\0')) ||
             (iVar2 = FUN_00023df0(piVar4[8]), iVar2 != 0)))) &&
           (*(short *)(piVar4[9] + 8) != *DAT_0019aa5c)) {
          puVar3 = (undefined4 *)thunk_FUN_00021db0(*(undefined4 *)(&DAT_00001fcc + param_1));
          goto joined_r0x0019a968;
        }
      }
    }
    else {
      uVar5 = 0;
      FUN_0019aae4(local_98,0x80,s_sleep_proxy_for__d_records_0019aa04);
      if (*_DAT_0019aa20 != 0) {
        FUN_00024642(3,s____Sleep_disabled_because_we_are_0019aa21 + 3,
                     *(undefined4 *)(param_1 + 0x3638));
      }
    }
  }
LAB_0019a9a8:
  FUN_00195586(param_1,uVar5,local_98);
  return;
joined_r0x0019a968:
  if (puVar3 == (undefined4 *)0x0) goto LAB_0019a9a8;
  if ((*(char *)((int)puVar3 + 0x1473) != '\0') && (*(char *)((int)puVar3 + 0x1475) == '\0')) {
    if (*(char *)(puVar3 + 0x51d) == '\0') {
      uVar5 = 0;
      iVar2 = (int)puVar3 + DAT_0019aa60;
      FUN_0019aae4(local_98,0x80,s__s_does_not_support_NetWake_0019aa64);
      if (*_DAT_0019aa20 != 0) {
        FUN_00024642(3,s_Sleep_disabled_because__s_does_n_0019aa80,iVar2);
      }
      goto LAB_0019a9a8;
    }
    iVar2 = FUN_00021270(param_1,puVar3 + 2,0);
    if (iVar2 == 0) {
      uVar5 = 0;
      iVar2 = (int)puVar3 + DAT_0019aa60;
      FUN_0019aae4(local_98,0x80,s__s_does_not_support_NetWake_0019aa64);
      if (*_DAT_0019aa20 != 0) {
        FUN_00024642(3,s_Sleep_disabled_because__s_has_no_0019aab4,iVar2);
      }
      goto LAB_0019a9a8;
    }
  }
  puVar3 = (undefined4 *)thunk_FUN_00021db0(*puVar3);
  goto joined_r0x0019a968;
}

