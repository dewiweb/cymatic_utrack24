// rea decompile_all
// name: FUN_0003f640
// address: 0x3f640
// body: available
// range: 0x3f640-0x3f7c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f640(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *local_20;
  
  sVar1 = *(short *)(param_2 + 6);
  if ((((sVar1 == 2) || (sVar1 == 5)) || (sVar1 == 0xc)) || (sVar1 == 0x27)) {
    puVar6 = (undefined1 *)(*(int *)(param_2 + 0x24) + 4);
  }
  else if (((sVar1 == 0xf) || (sVar1 == 0x12)) || ((sVar1 == 0x15 || (sVar1 == 0x24)))) {
    puVar6 = (undefined1 *)(*(int *)(param_2 + 0x24) + 6);
  }
  else if (sVar1 == 0x21) {
    puVar6 = (undefined1 *)(*(int *)(param_2 + 0x24) + 10);
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  local_20 = (char *)(param_1 + DAT_0003f7cc);
  if ((puVar6 == (undefined1 *)0x0) && (*DAT_0003f7d0 != 0)) {
    uVar4 = FUN_000203e4();
    FUN_00024642(3,_DAT_0003f7d4,uVar4);
  }
  if ((((*(char *)(param_2 + 0x46) == '\0') && (*(char *)(param_2 + 0x78) != '\x02')) &&
      (*(char *)(param_2 + 0x78) != '\x03')) && (iVar3 = FUN_00023df0(param_2 + 0x158), iVar3 == 0))
  {
    if ((*(char *)(param_2 + 0x44) != '\0') &&
       ((iVar3 = FUN_00021808(param_1,*(undefined4 *)(param_2 + 0x20)), iVar3 == 0 ||
        (*(int *)(iVar3 + 8) == 0)))) {
      *(undefined1 *)(param_2 + 0x44) = 2;
    }
    local_20 = (char *)FUN_00022c78(param_1,param_2);
    if ((local_20 == (char *)0x0) || (*local_20 == '\0')) {
      if (*DAT_0003f7d0 != 0) {
        uVar4 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37);
        FUN_00024642(3,s_SetUnicastTargetToHostName_No_ta_0003f818,uVar4);
      }
      *(undefined1 *)(param_2 + 0xd8) = 8;
      local_20 = (char *)0x0;
    }
    else if (*DAT_0003f7d0 != 0) {
      uVar4 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37);
      FUN_00024642(3,s___SetUnicastTargetToHostName_tar_0003f7d6 + 2,local_20,uVar4);
    }
    if (local_20 == (char *)0x0) {
      *puVar6 = 0;
      FUN_0003f3bc(param_2 + 4,0,0);
      return;
    }
  }
  if (puVar6 != (undefined1 *)0x0) {
    FUN_0003b48a(puVar6,local_20);
    iVar3 = FUN_0003b48a(puVar6,local_20);
    if (iVar3 == 0) {
      uVar5 = FUN_00020a0a(local_20,local_20 + 0x100);
      if (uVar5 < 0x101) {
        FUN_001952f0(puVar6,local_20,uVar5);
      }
      else {
        *puVar6 = 0;
      }
      FUN_0003f3bc(param_2 + 4,0);
      if (*(char *)(param_2 + 4) == '\x02') {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)(param_2 + 0x7a) = uVar2;
      *(undefined1 *)(param_2 + 0x7b) = 8;
      *(undefined1 *)(param_2 + 0x7c) = 0;
      FUN_000236c0(param_1,param_2);
      return;
    }
  }
  return;
}

