// rea decompile_all
// name: FUN_000d4048
// address: 0xd4048
// body: available
// range: 0xd4048-0xd4183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d4048(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  int local_90;
  int iStack_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 auStack_68 [20];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  uVar1 = 1;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x474) = 1;
    *(bool *)(param_1 + 0x473) = param_3 == 3;
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x474) = 0;
  }
  else if ((param_2 == 2) &&
          (*(undefined1 *)(param_1 + 0x47e) = 1, *(char *)(param_1 + 0x47c) != '\0')) {
    return;
  }
  thunk_FUN_0006b340(&local_90);
  *(bool *)(param_1 + 0x47a) = local_90 != iStack_8c;
  if (*(char *)(param_1 + 0x47e) == '\0') {
    FUN_00040b48(auStack_68);
    bVar2 = local_54 == 0;
    if (bVar2) {
      local_54 = local_50;
    }
    if (bVar2 && local_54 == 0) {
      bVar2 = local_4c == 0;
      if (bVar2) {
        local_4c = local_48;
      }
      bVar3 = bVar2 && local_4c == 0;
      if (bVar2 && local_4c == 0) {
        bVar3 = local_44 == 0;
      }
      if (bVar3) {
        FUN_00040af4(&local_90);
        bVar2 = local_84 == 0;
        if (bVar2) {
          local_84 = local_80;
        }
        if (bVar2 && local_84 == 0) {
          bVar2 = local_7c == 0;
          if (bVar2) {
            local_7c = local_78;
          }
          if (bVar2 && local_7c == 0) {
            bVar2 = local_74 == 0;
            if (bVar2) {
              local_74 = local_70;
            }
            if (bVar2 && local_74 == 0) {
              uVar1 = 0;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x47c) = uVar1;
  uVar1 = FUN_000d0f0c(param_1);
  *(undefined1 *)(param_1 + 0x47b) = uVar1;
  uVar1 = FUN_000d0e48(param_1);
  *(undefined1 *)(param_1 + 0x47d) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000d4180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x118) + 0x104))(*(int **)(param_1 + 0x118),param_1 + 0x470);
  return;
}

