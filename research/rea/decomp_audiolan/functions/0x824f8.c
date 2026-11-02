// rea decompile_all
// name: FUN_000824f8
// address: 0x824f8
// body: available
// range: 0x824f8-0x825b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x82570 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000824f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar3 = FUN_000151a4(s__dev_spiSlave_000825b8,2);
  *(int *)(param_1 + 0xcc) = iVar3;
  if (iVar3 != -1) {
    do {
      do {
        iVar3 = FUN_000153bc(*(undefined4 *)(param_1 + 0xcc),&local_20,1);
      } while (iVar3 < 1);
      if ((char)local_20 == '\0') {
        if (*(short *)(param_1 + 0xd0) != 0) {
          iVar3 = *(int *)(param_1 + 0xc4);
          if (iVar3 != 0) {
            uVar2 = FUN_00067524(param_1 + 0xc0,param_1 + 0xd2,*(short *)(param_1 + 0xd0),
                                 param_1 + 0x912);
            FUN_0005ae14(iVar3,param_1 + 0x912,uVar2);
          }
          *(undefined2 *)(param_1 + 0xd0) = 0;
        }
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0xd0);
        if (uVar1 < 0x840) {
          *(ushort *)(param_1 + 0xd0) = uVar1 + 1;
          *(char *)((uint)uVar1 + param_1 + 0xd2) = (char)local_20;
        }
      }
    } while( true );
  }
  thunk_FUN_000028a4(DAT_000825c8);
  return;
}

