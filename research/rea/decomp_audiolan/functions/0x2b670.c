// rea decompile_all
// name: FUN_0002b670
// address: 0x2b670
// body: available
// range: 0x2b670-0x2b8ab inclusive
// range: 0x2b948-0x2b94b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b670(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *unaff_r4;
  int unaff_r5;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined2 *in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000048;
  
  iVar5 = FUN_00030b90(_DAT_0002b8c0);
  if (iVar5 != 0) {
    FUN_00029e6c(_DAT_0002b8c0);
    FUN_00029eac(6,s_MM__PARENT_DATA_SET_management_m_0002b904);
  }
  iVar5 = *(int *)(unaff_r5 + 0xc);
  uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar5 + 0x2a),*(undefined1 *)(iVar5 + 0x2b));
  if ((uVar6 == *(ushort *)(*unaff_r4 + 2)) || (uVar6 == DAT_0002b938)) {
    if ((*(byte *)(iVar5 + 0x2e) & 0xf) == 0) {
      uVar3 = FUN_000358f6(*(undefined2 *)(iVar5 + 0x1e));
      in_stack_00000048 = iVar5 + 0x14;
      cVar1 = *(char *)(iVar5 + 0x2c) - *(char *)(iVar5 + 0x2d);
      iVar5 = *(int *)(*unaff_r4 + 0x27c);
      FUN_000358a2(DAT_0002b8b8,0,1000);
      uVar8 = DAT_0002b8b8;
      FUN_0003589a(in_stack_00000004,in_stack_00000048,10);
      *(char *)(in_stack_00000000 + 0xc) = cVar1;
      *(char *)(in_stack_00000000 + 0xd) = cVar1;
      *(undefined1 *)(in_stack_00000000 + 0xe) = 2;
      uVar4 = FUN_0003586c(1);
      *in_stack_00000024 = uVar4;
      uVar4 = FUN_0003586c(0x26);
      in_stack_00000024[1] = uVar4;
      uVar4 = FUN_0003586c(DAT_0002b944);
      in_stack_00000024[2] = uVar4;
      FUN_0003589a(in_stack_00000028,iVar5,8);
      *(undefined1 *)(in_stack_00000028 + 8) = *(undefined1 *)(iVar5 + 8);
      *(undefined1 *)(in_stack_00000028 + 9) = *(undefined1 *)(iVar5 + 9);
      if (*(char *)(iVar5 + 10) != '\0') {
        *(undefined1 *)(in_stack_00000028 + 10) = 1;
      }
      uVar4 = FUN_0003586c(*(undefined2 *)(iVar5 + 0xc));
      *(undefined2 *)(in_stack_00000028 + 0xc) = uVar4;
      uVar7 = FUN_00035820(*(undefined4 *)(iVar5 + 0x10));
      *(undefined4 *)(in_stack_00000028 + 0x10) = uVar7;
      FUN_0003589a(in_stack_00000028 + 0x1b,iVar5 + 0x1c,8);
      *(undefined1 *)(in_stack_00000028 + 0x17) = *(undefined1 *)(iVar5 + 0x19);
      *(undefined1 *)(in_stack_00000028 + 0x16) = *(undefined1 *)(iVar5 + 0x18);
      uVar4 = FUN_0003586c(*(undefined2 *)(iVar5 + 0x1a));
      *(undefined2 *)(in_stack_00000028 + 0x18) = uVar4;
      *(undefined1 *)(in_stack_00000028 + 0x14) = *(undefined1 *)(iVar5 + 0x14);
      *(undefined1 *)(in_stack_00000028 + 0x1a) = *(undefined1 *)(iVar5 + 0x15);
      FUN_00030ace(&stack0x0000002c);
      FUN_00030b0c(&stack0x0000002c,DAT_0002b8b8,0x5a,0xd);
      FUN_0002f5f0(unaff_r4,uVar8,uVar3,0x5a);
      FUN_00033eb4(*(undefined2 *)(*unaff_r4 + 2),&stack0x0000002c);
      uVar8 = _DAT_0002b8c0;
      iVar5 = FUN_00030b90(_DAT_0002b8c0);
      if (iVar5 != 0) {
        uVar8 = FUN_00029e6c(uVar8);
        FUN_0002a2ae(uVar8,s_MM__PARENT_DATASET_response_mana_0002bd0c);
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
        FUN_00029eac(4,DAT_0002b940);
      }
    }
  }
  else {
    iVar5 = FUN_00030b90();
    if (iVar5 != 0) {
      FUN_00029e6c();
      FUN_00029eac(4,DAT_0002b93c);
    }
  }
  FUN_00030aa4();
  return;
}

