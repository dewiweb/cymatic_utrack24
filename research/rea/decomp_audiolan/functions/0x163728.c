// rea decompile_all
// name: FUN_00163728
// address: 0x163728
// body: available
// range: 0x163728-0x16388f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00163728(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar3 = FUN_0017bfc0();
  uVar2 = DAT_00163890;
  if ((*(int *)(param_1 + 0x38) != 0) && (799 < (uint)(iVar3 - *(int *)(param_1 + 0x38)))) {
    uVar7 = 0;
    if (*(short *)(*(int *)(param_1 + 4) + 0xac) != 0) {
      do {
        iVar4 = FUN_0013f040(*(int *)(param_1 + 4) + 0xa8,uVar7);
        if ((iVar4 != 0) && (*(char *)(iVar4 + 0xe) == '\x01' || *(char *)(iVar4 + 0xe) == '\x02'))
        {
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = uVar2;
          (**(code **)(**(int **)(param_1 + 4) + 0x1bc))(*(int **)(param_1 + 4),iVar4,0x3000,0,0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(*(int *)(param_1 + 4) + 0xac));
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  bVar8 = *(char *)(param_1 + 0x33) != '\0';
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0x34);
  }
  if (bVar8 && cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x3c);
    if (iVar4 != 0) goto LAB_00163874;
    local_2c = CONCAT31(local_2c._1_3_,0xfe);
    uVar7 = 0;
    while ((uVar7 < *(ushort *)(param_1 + 0x20) &&
           (puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + uVar7 * 4),
           puVar5 != (undefined4 *)0x0))) {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 != (int *)0x0) {
        piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0x14));
      }
      (**(code **)*puVar5)(puVar5,piVar6,1,&local_2c,uVar2);
      uVar7 = uVar7 + 1 & 0xfffeffff;
    }
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 0) {
    return;
  }
LAB_00163874:
  if (DAT_00163894 < (uint)(iVar3 - iVar4)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

