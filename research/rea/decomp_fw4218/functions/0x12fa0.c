// rea decompile_all
// name: FUN_00012fa0
// address: 0x12fa0
// body: available
// range: 0x12fa0-0x1317b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00012fa0(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_r3;
  undefined4 *puVar9;
  int unaff_r7;
  bool bVar10;
  int iStack_18;
  
  iVar7 = DAT_000131f8;
  uVar1 = *(int *)(DAT_000131f8 + 0x14) + 1;
  *(uint *)(DAT_000131f8 + 0x14) = uVar1;
  piVar4 = DAT_00013208;
  if ((uVar1 & *(ushort *)(iVar7 + 2)) != 0) {
    return;
  }
  *DAT_00013208 = *DAT_00013208 + 1;
  iStack_18 = in_r3;
  uVar1 = (**(code **)(iVar7 + 0x20))();
  bVar10 = (uint)piVar4[-2] >> 0x19 != uVar1 >> 0x19;
  *(uint *)(iVar7 + 0x1c) = uVar1;
  *(uint *)(iVar7 + 4) = (uVar1 & 0xfff) + ((uVar1 & 0x1ffffff) >> 0xc) * 0xc00;
  if (bVar10) {
    unaff_r7 = 1;
  }
  puVar9 = (undefined4 *)*DAT_000131fc;
  if (!bVar10) {
    unaff_r7 = 0;
  }
  if ((puVar9 != (undefined4 *)0x0) &&
     (iVar2 = (*(code *)**(undefined4 **)*puVar9)((undefined4 *)*puVar9,puVar9), iVar2 != 0)) {
    iVar6 = *(int *)(iVar7 + 0x18) + (uint)*(ushort *)(iVar7 + 2) * 8 + 8;
    *(int *)(iVar7 + 0x18) = iVar6;
    *(int *)(iVar2 + 4) = iVar6;
    iStack_18 = iVar2;
    iVar2 = thunk_EXT_FUN_004005e0(puVar9[2],&iStack_18,0);
    if (iVar2 != 0) {
      *(int *)(puVar9[5] + 4) = *(int *)(puVar9[5] + 4) + 1;
      if ((code *)puVar9[10] != entry) {
        (*(code *)puVar9[10])((int)*(short *)(puVar9 + 8),3,0,puVar9[0xb]);
      }
      cVar5 = *(char *)(iStack_18 + -4) + -1;
      *(char *)(iStack_18 + -4) = cVar5;
      if (cVar5 == '\0') {
        FUN_001ce72c();
      }
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if (*DAT_00013200 != 0) {
    FUN_00012e20();
  }
  iVar2 = DAT_00013204;
  uVar1 = 0;
  do {
    pcVar3 = *(code **)(iVar2 + uVar1 * 4);
    if (pcVar3 != entry) {
      (*pcVar3)();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  if (unaff_r7 != 0) {
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    piVar4 = DAT_000131fc;
    while( true ) {
      iVar7 = *piVar4;
      piVar8 = DAT_00013200;
      if (iVar7 == 0) break;
      iVar2 = *(int *)(iVar7 + 0x14);
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x1c);
      *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x1c) =
           *(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x18);
      piVar4 = piVar4 + 1;
    }
    while( true ) {
      piVar4 = piVar8 + 1;
      iVar7 = *piVar8;
      if (iVar7 == 0) break;
      piVar8 = piVar4;
      if (*(char *)(iVar7 + 0x14) == '\0') {
        iVar2 = *(int *)(iVar7 + 0x18);
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 0x10);
        *(undefined4 *)(*(int *)(iVar7 + 0x18) + 0x10) = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 8)
        ;
      }
    }
    return;
  }
  return;
}

