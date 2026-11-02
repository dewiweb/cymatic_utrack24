// rea decompile_all
// name: FUN_001274ac
// address: 0x1274ac
// body: available
// range: 0x1274ac-0x1276fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1276ec to 0x1b7d8 <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001274ac(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *local_48;
  char *local_44;
  int local_40;
  undefined1 uStack_38;
  undefined1 local_37;
  ushort local_36;
  undefined4 local_34;
  
  local_44 = s__dev_TelnetShell_001276fc;
  if (*(char *)(param_1 + 0x1b2) == '\0') {
    local_40 = param_1 + 0xd4;
    puVar3 = (undefined1 *)(param_1 + 0x132);
    puVar6 = (undefined1 *)(param_1 + 0x152);
    puVar4 = (undefined1 *)(param_1 + 0x172);
    puVar5 = (undefined1 *)(param_1 + 0x192);
    do {
      while( true ) {
        *(undefined1 *)(param_1 + 0x1b3) = 0;
        iVar1 = FUN_001e23c0(2,1,0);
        *(int *)(param_1 + 0x128) = iVar1;
        if (iVar1 != -1) break;
LAB_00127564:
        FUN_001d0130(1000);
      }
      local_37 = 2;
      local_34 = 0;
      local_36 = *(ushort *)(param_1 + 0x130) >> 8 | *(ushort *)(param_1 + 0x130) << 8;
      iVar1 = FUN_001e1450(*(undefined4 *)(param_1 + 0x128),&uStack_38,0x10);
      if ((iVar1 != 0) || (iVar1 = FUN_001e15dc(*(undefined4 *)(param_1 + 0x128),5), iVar1 != 0))
      goto LAB_00127564;
      local_48 = &DataAbort;
      iVar1 = FUN_001e1214(*(undefined4 *)(param_1 + 0x128),&uStack_38,&local_48);
      *(int *)(param_1 + 300) = iVar1;
      if (iVar1 == -1) {
        FUN_001e1528(*(undefined4 *)(param_1 + 0x128));
      }
      else {
        pcVar2 = (char *)FUN_001dba80();
        *puVar3 = 0;
        if (*pcVar2 != '\0') {
          local_48 = pcVar2;
          FUN_000027e8(puVar3,0x20,DAT_00127710 + -8);
          *(undefined1 *)(param_1 + 0x151) = 0;
        }
        FUN_001f4728(local_44);
        pcVar2 = (char *)FUN_001dbac8();
        *puVar6 = 0;
        if (*pcVar2 != '\0') {
          local_48 = pcVar2;
          FUN_000027e8(puVar6,0x20,DAT_00127710 + -8);
          *(undefined1 *)(param_1 + 0x171) = 0;
        }
        FUN_001f47c8(local_44);
        pcVar2 = (char *)FUN_001dba38();
        *puVar4 = 0;
        if (*pcVar2 != '\0') {
          local_48 = pcVar2;
          FUN_000027e8(puVar4,0x20,DAT_00127710 + -8);
          *(undefined1 *)(param_1 + 0x191) = 0;
        }
        FUN_001f466c(local_44);
        pcVar2 = (char *)FUN_001db8b0();
        *puVar5 = 0;
        if (*pcVar2 != '\0') {
          local_48 = pcVar2;
          FUN_000027e8(puVar5,0x20,DAT_00127710 + -8);
          *(undefined1 *)(param_1 + 0x1b1) = 0;
        }
        FUN_001f458c(local_44);
        (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1 + 4);
        FUN_001f4728(puVar3);
        FUN_001f47c8(puVar6);
        FUN_001f466c(puVar4);
        FUN_001f458c(puVar5);
        FUN_001e1528(*(undefined4 *)(param_1 + 300));
        *(undefined4 *)(param_1 + 300) = 0xffffffff;
        FUN_001e1528(*(undefined4 *)(param_1 + 0x128));
        *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x104) = 1;
        FUN_001cf828(local_40);
      }
    } while (*(char *)(param_1 + 0x1b2) == '\0');
  }
  thunk_EXT_FUN_0040010c(param_1 + 0x1b4);
  return;
}

