// rea decompile_all
// name: FUN_000d0bf0
// address: 0xd0bf0
// body: available
// range: 0xd0bf0-0xd0d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d0bf0(int *param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  
  bVar8 = false;
  piVar4 = param_1 + 0x179;
  FUN_001a0700(piVar4);
  if ((param_2 & ~(uint)*(ushort *)((int)param_1 + 0x60a)) != 0) {
    *(ushort *)((int)param_1 + 0x60a) = *(ushort *)((int)param_1 + 0x60a) | (ushort)param_2;
    bVar8 = *(char *)((int)param_1 + 0x609) == '\0';
    if (bVar8) {
      *(undefined1 *)((int)param_1 + 0x609) = 1;
    }
  }
  FUN_001a0d18();
  if (!bVar8) {
    return;
  }
  if (param_3 != 0) {
    piVar7 = (int *)param_1[0x46];
    FUN_001a0700(piVar4);
    *(undefined1 *)((int)param_1 + 0x609) = 0;
    uVar1 = *(undefined2 *)((int)param_1 + 0x60a);
    FUN_001a0d18(piVar4);
                    /* WARNING: Could not recover jumptable at 0x000d0cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar7 + 0x108))(piVar7,uVar1);
    return;
  }
  uVar5 = *DAT_000d0d10;
  uVar6 = DAT_000d0d10[1];
  puVar2 = (undefined4 *)FUN_001a0808(0x10,1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_000d0d14;
    puVar2[1] = param_1;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,puVar2,0);
  if (iVar3 != 0) {
    return;
  }
  FUN_000028a4(DAT_000d0d18);
  *(undefined1 *)((int)param_1 + 0x609) = 0;
  return;
}

