// rea decompile_all
// name: FUN_0002b2f4
// address: 0x2b2f4
// body: available
// range: 0x2b2f4-0x2b34d inclusive
// range: 0x2b4c4-0x2b66f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b2f4(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int *unaff_r4;
  int unaff_r5;
  undefined8 uVar9;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined2 *in_stack_00000024;
  undefined2 *in_stack_00000028;
  
  iVar5 = FUN_00030b90(_DAT_0002b350);
  if (iVar5 != 0) {
    FUN_00029e6c(_DAT_0002b350);
    FUN_00029eac(6,s_MM__CURRENT_DATA_SET_management_m_0002b490);
  }
  iVar5 = *(int *)(unaff_r5 + 0xc);
  uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar5 + 0x2a),*(undefined1 *)(iVar5 + 0x2b));
  if ((uVar7 == *(ushort *)(*unaff_r4 + 2)) || (uVar7 == DAT_0002b3c0)) {
    if ((*(byte *)(iVar5 + 0x2e) & 0xf) == 0) {
      uVar3 = FUN_000358f6(*(undefined2 *)(iVar5 + 0x1e));
      cVar1 = *(char *)(iVar5 + 0x2c) - *(char *)(iVar5 + 0x2d);
      puVar8 = *(undefined2 **)(*unaff_r4 + 0x270);
      FUN_000358a2(DAT_0002b8b8,0,1000);
      uVar6 = DAT_0002b8b8;
      FUN_0003589a(in_stack_00000004,iVar5 + 0x14,10);
      *(char *)(in_stack_00000000 + 0xc) = cVar1;
      *(char *)(in_stack_00000000 + 0xd) = cVar1;
      *(undefined1 *)(in_stack_00000000 + 0xe) = 2;
      uVar4 = FUN_0003586c(1);
      *in_stack_00000024 = uVar4;
      uVar4 = FUN_0003586c(0x1a);
      in_stack_00000024[1] = uVar4;
      uVar4 = FUN_0003586c(DAT_0002b8bc);
      in_stack_00000024[2] = uVar4;
      uVar4 = FUN_0003586c(*puVar8);
      *in_stack_00000028 = uVar4;
      uVar9 = FUN_0003583c(*(undefined4 *)(puVar8 + 4),*(undefined4 *)(puVar8 + 6));
      *(undefined8 *)(in_stack_00000028 + 4) = uVar9;
      uVar9 = FUN_0003583c(*(undefined4 *)(puVar8 + 8),*(undefined4 *)(puVar8 + 10));
      *(undefined8 *)(in_stack_00000028 + 8) = uVar9;
      FUN_00030ace(&stack0x0000002c);
      FUN_00030b0c(&stack0x0000002c,DAT_0002b8b8,0x4e,0xd);
      FUN_0002f5f0(unaff_r4,uVar6,uVar3,0x4e);
      FUN_00033eb4(*(undefined2 *)(*unaff_r4 + 2),&stack0x0000002c);
      uVar6 = _DAT_0002b8c0;
      iVar5 = FUN_00030b90(_DAT_0002b8c0);
      if (iVar5 != 0) {
        uVar6 = FUN_00029e6c(uVar6);
        FUN_0002a2ae(uVar6,s__MM__CURRENT_DATASET_response_ma_0002b8c3 + 1);
        return;
      }
    }
    else {
      FUN_000358f6(*(undefined2 *)(iVar5 + 0x34));
      cVar1 = *(char *)(iVar5 + 0x2c);
      cVar2 = *(char *)(iVar5 + 0x2d);
      uVar3 = FUN_000358f6(*(undefined2 *)(iVar5 + 0x1e));
      FUN_0002fef8(unaff_r4,uVar3,iVar5 + 0x14,cVar1 - cVar2);
      iVar5 = FUN_00030b90();
      if (iVar5 != 0) {
        FUN_00029e6c();
        FUN_00029eac(4,DAT_0002b8b4);
      }
    }
  }
  else {
    iVar5 = FUN_00030b90();
    if (iVar5 != 0) {
      FUN_00029e6c();
      FUN_00029eac(4,DAT_0002b8ac);
    }
  }
  FUN_00030aa4();
  return;
}

