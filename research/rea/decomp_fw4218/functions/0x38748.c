// rea decompile_all
// name: FUN_00038748
// address: 0x38748
// body: available
// range: 0x38748-0x388f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038748(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [20];
  
  iVar4 = FUN_0002aab0();
  uVar1 = DAT_00038924;
  if (iVar4 == 0) {
    iVar4 = FUN_000366e0(DAT_00038924);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(3,s_PTP_MSG__Could_not_create_announ_00038928);
      return;
    }
  }
  else {
    FUN_0003661e(auStack_44);
    iVar5 = *param_1;
    FUN_0003665c(auStack_44,iVar4,0x40,0xb,*(undefined1 *)(iVar5 + 0x3b4),0,
                 (int)*(short *)(iVar5 + 0x3b6),*(undefined1 *)(iVar5 + 0x3b8),
                 *(undefined1 *)(iVar5 + 0x3e0));
    piVar6 = param_1 + 0x10;
    sVar2 = *(short *)((int)param_1 + 0x46) + 1;
    *(short *)((int)param_1 + 0x46) = sVar2;
    FUN_0003856c(param_1,iVar4,sVar2,0xb,0x40,*(undefined1 *)(*param_1 + 0x3b4));
    FUN_0002b5dc(auStack_28);
    FUN_0003c38c(auStack_28,iVar4 + 0x22);
    uVar3 = FUN_0003b618((int)**(short **)(*param_1 + 0x278));
    *(char *)(iVar4 + 0x2c) = (char)uVar3;
    *(char *)(iVar4 + 0x2d) = (char)((ushort)uVar3 >> 8);
    *(undefined1 *)(iVar4 + 0x3f) = *(undefined1 *)(*(int *)(*param_1 + 0x278) + 8);
    uVar3 = **(undefined2 **)(*param_1 + 0x270);
    *(char *)(iVar4 + 0x3d) = (char)((ushort)uVar3 >> 8);
    *(char *)(iVar4 + 0x3e) = (char)uVar3;
    *(undefined1 *)(iVar4 + 0x35) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x1c);
    *(undefined1 *)(iVar4 + 0x36) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x1d);
    *(undefined1 *)(iVar4 + 0x37) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x1e);
    *(undefined1 *)(iVar4 + 0x38) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x1f);
    *(undefined1 *)(iVar4 + 0x39) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x20);
    *(undefined1 *)(iVar4 + 0x3a) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x21);
    *(undefined1 *)(iVar4 + 0x3b) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x22);
    *(undefined1 *)(iVar4 + 0x3c) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x23);
    *(undefined1 *)(iVar4 + 0x31) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x19);
    *(undefined1 *)(iVar4 + 0x30) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x18);
    uVar3 = FUN_0003b618(*(undefined2 *)(*(int *)(*param_1 + 0x27c) + 0x1a));
    *(char *)(iVar4 + 0x32) = (char)uVar3;
    *(char *)(iVar4 + 0x33) = (char)((ushort)uVar3 >> 8);
    *(undefined1 *)(iVar4 + 0x2f) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x14);
    *(undefined1 *)(iVar4 + 0x34) = *(undefined1 *)(*(int *)(*param_1 + 0x27c) + 0x15);
    uVar1 = _DAT_000388f8;
    iVar4 = FUN_000366e0(_DAT_000388f8);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s__PTP_MSG__TX_Announce_000388fb + 1);
    }
    iVar4 = FUN_000366e0(uVar1);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s_Seq_ID___d_00038914,*(undefined2 *)((int)piVar6 + 6));
    }
    FUN_00039a50(*(undefined2 *)(*param_1 + 2),auStack_44);
    FUN_000365f4(auStack_44);
  }
  return;
}

