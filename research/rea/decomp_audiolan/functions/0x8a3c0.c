// rea decompile_all
// name: FUN_0008a3c0
// address: 0x8a3c0
// body: available
// range: 0x8a3c0-0x8a54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8a500 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0008a3c0(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char local_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar5 = (int *)(param_1 + 200);
  iVar3 = FUN_000151a4(*(undefined4 *)(param_1 + 200),2);
  *(int *)(param_1 + 0xd0) = iVar3;
  if (iVar3 == -1) {
    thunk_FUN_000028a4(DAT_0008a580,*piVar5);
    return;
  }
  do {
    while( true ) {
      do {
        while( true ) {
          do {
            iVar3 = FUN_000153bc(*(undefined4 *)(param_1 + 0xd0),local_38,1);
          } while (iVar3 < 1);
          if (local_38[0] != '\0') break;
          if (*(short *)(param_1 + 0xd6) != 0) {
            iVar3 = *(int *)(param_1 + 0xc4);
            if (iVar3 != 0) {
              uVar2 = FUN_00067524(param_1 + 0xc0,param_1 + 0xd8,*(short *)(param_1 + 0xd6),
                                   param_1 + 0x918);
              FUN_0005ae14(iVar3,param_1 + 0x918,uVar2);
            }
            *(undefined2 *)(param_1 + 0xd6) = 0;
            *(undefined1 *)(param_1 + 0xd4) = 1;
          }
        }
        uVar1 = *(ushort *)(param_1 + 0xd6);
      } while (0x83f < uVar1);
      *(ushort *)(param_1 + 0xd6) = uVar1 + 1;
      *(char *)((uint)uVar1 + param_1 + 0xd8) = local_38[0];
      if (local_38[0] == '\x04') break;
      *(undefined1 *)(param_1 + 0xd4) = 0;
    }
  } while ((*(char *)(param_1 + 0xd4) == '\0') || (*(ushort *)(param_1 + 0xd6) < 0x20));
  iVar3 = *piVar5;
  uVar4 = FUN_0018afdc();
  iVar3 = FUN_00003960(uVar4,iVar3 + 5);
  if (iVar3 == 0) {
    FUN_0018afdc();
    iVar3 = FUN_0018b4d0();
    uStack_34 = *(undefined4 *)(iVar3 + 8);
    uStack_30 = *(undefined4 *)(iVar3 + 0x10);
    uStack_2c = *(undefined4 *)(iVar3 + 0x10);
    uStack_28 = *(undefined4 *)(iVar3 + 0x14);
    FUN_0001545c(*(undefined4 *)(param_1 + 0xd0),3,local_38);
    FUN_001ac500(*piVar5);
    FUN_001ac5a0(*piVar5);
    FUN_001ac444(*piVar5);
    FUN_001ac364(*piVar5);
    FUN_000151c4(s_ARCTransportUART__Shell_has_been_0008a54c);
    return;
  }
  return;
}

