// rea decompile_all
// name: FUN_001652a4
// address: 0x1652a4
// body: available
// range: 0x1652a4-0x16549f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001652a4(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  piVar4 = (int *)(param_1 + -0x114);
  uVar7 = 0;
  if (param_3 != 0) {
    uVar7 = (param_4 & 0xff) << 8 | 1;
  }
  if (param_5 != 0) {
    uVar7 = uVar7 | param_6 << 0x18 | 0x10000;
  }
  uVar3 = 0;
  if (param_7 != 0) {
    uVar3 = param_8;
  }
  uVar5 = *DAT_001654a0;
  uVar6 = DAT_001654a0[1];
  uVar8 = 0;
  iVar2 = param_1;
  puVar1 = (undefined4 *)FUN_001a0808(0x20,1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_001654a4;
    puVar1[1] = piVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(char *)(puVar1 + 4) = (char)param_2;
    *(char *)(puVar1 + 5) = (char)uVar7;
    *(char *)((int)puVar1 + 0x15) = (char)(uVar7 >> 8);
    *(char *)((int)puVar1 + 0x16) = (char)(uVar7 >> 0x10);
    *(char *)((int)puVar1 + 0x17) = (char)(uVar7 >> 0x18);
    *(bool *)(puVar1 + 6) = param_7 != 0;
    puVar1[7] = uVar3;
  }
  iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,puVar1,uVar8,*(code **)(*piVar4 + 0x2c),uVar8,iVar2);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0016549c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2,2);
    return;
  }
  return;
}

