// rea decompile_all
// name: FUN_0003149c
// address: 0x3149c
// body: available
// range: 0x3149c-0x316f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003149c(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *unaff_r4;
  int unaff_r5;
  short *psVar8;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined2 *in_stack_00000024;
  undefined2 *in_stack_00000028;
  
  iVar5 = FUN_000366e0(_DAT_00031898);
  if (iVar5 != 0) {
    FUN_0002f9bc(_DAT_00031898);
    FUN_0002f9fc(6,s__MM__TIME_PROPERTIES_DATA_SET_ma_0003189b + 1);
  }
  iVar5 = *(int *)(unaff_r5 + 0xc);
  uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar5 + 0x2a),*(undefined1 *)(iVar5 + 0x2b));
  if ((uVar7 == *(ushort *)(*unaff_r4 + 2)) || (uVar7 == DAT_000318d8)) {
    if ((*(byte *)(iVar5 + 0x2e) & 0xf) == 0) {
      uVar3 = FUN_0003b6a2(*(undefined2 *)(iVar5 + 0x1e));
      cVar1 = *(char *)(iVar5 + 0x2c) - *(char *)(iVar5 + 0x2d);
      psVar8 = *(short **)(*unaff_r4 + 0x278);
      FUN_0003b64e(DAT_000318e8,0,1000);
      uVar6 = DAT_000318e8;
      FUN_0003b646(in_stack_00000004,iVar5 + 0x14,10);
      *(char *)(in_stack_00000000 + 0xc) = cVar1;
      *(char *)(in_stack_00000000 + 0xd) = cVar1;
      *(undefined1 *)(in_stack_00000000 + 0xe) = 2;
      uVar4 = FUN_0003b618(1);
      *in_stack_00000024 = uVar4;
      uVar4 = FUN_0003b618(6);
      in_stack_00000024[1] = uVar4;
      uVar4 = FUN_0003b618(DAT_000318ec);
      in_stack_00000024[2] = uVar4;
      uVar4 = FUN_0003b618((int)*psVar8);
      *in_stack_00000028 = uVar4;
      if (*(char *)((int)psVar8 + 3) != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 2;
      }
      if ((char)psVar8[1] != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 1;
      }
      if (*(char *)((int)psVar8 + 7) != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 0x20;
      }
      if ((char)psVar8[3] != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 0x10;
      }
      if (*(char *)((int)psVar8 + 5) != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 8;
      }
      if ((char)psVar8[2] != '\0') {
        *(byte *)(in_stack_00000028 + 1) = *(byte *)(in_stack_00000028 + 1) | 4;
      }
      *(char *)((int)in_stack_00000028 + 3) = (char)psVar8[4];
      FUN_0003661e(&stack0x0000002c);
      FUN_0003665c(&stack0x0000002c,DAT_000318e8,0x3a,0xd);
      FUN_00035140(unaff_r4,uVar6,uVar3,0x3a);
      FUN_00039a50(*(undefined2 *)(*unaff_r4 + 2),&stack0x0000002c);
      uVar6 = _DAT_00031898;
      iVar5 = FUN_000366e0(_DAT_00031898);
      if (iVar5 != 0) {
        uVar6 = FUN_0002f9bc(uVar6);
        FUN_0002fdfe(uVar6,_DAT_000318f0);
        return;
      }
    }
    else {
      FUN_0003b6a2(*(undefined2 *)(iVar5 + 0x34));
      cVar1 = *(char *)(iVar5 + 0x2c);
      cVar2 = *(char *)(iVar5 + 0x2d);
      uVar3 = FUN_0003b6a2(*(undefined2 *)(iVar5 + 0x1e));
      FUN_00035a48(unaff_r4,uVar3,iVar5 + 0x14,cVar1 - cVar2);
      iVar5 = FUN_000366e0();
      if (iVar5 != 0) {
        FUN_0002f9bc();
        FUN_0002f9fc(4,DAT_000318e4);
      }
    }
  }
  else {
    iVar5 = FUN_000366e0();
    if (iVar5 != 0) {
      FUN_0002f9bc();
      FUN_0002f9fc(4,DAT_000318dc);
    }
  }
  FUN_000365f4();
  return;
}

