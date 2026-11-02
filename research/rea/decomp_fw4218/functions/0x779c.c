// rea decompile_all
// name: FUN_0000779c
// address: 0x779c
// body: available
// range: 0x779c-0x7897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000779c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1 + 0x118;
  FUN_001f00bc(iVar5);
  if (*param_2 != 0) {
    if ((char)param_3[8] == '\x02') {
      iVar1 = FUN_0000a3b8(*param_2,param_3);
      if (iVar1 != 0) goto LAB_000077ec;
      (**(code **)(*param_3 + 0x14))(param_3,1);
      puVar4 = *(undefined4 **)(param_1 + 0x178);
      if (*(undefined4 **)(param_1 + 0x17c) != puVar4) {
        do {
          piVar6 = (int *)*puVar4;
          uVar2 = FUN_0000a2e8(*param_2);
          uVar3 = (**(code **)(*param_3 + 0x1c))(param_3);
          (**(code **)(*piVar6 + 8))(piVar6,uVar3,uVar2,0);
          puVar4 = puVar4 + 1;
        } while (*(undefined4 **)(param_1 + 0x17c) != puVar4);
      }
    }
    FUN_001f06d4(iVar5);
    return 0;
  }
LAB_000077ec:
  FUN_001f06d4(iVar5);
  return 1;
}

