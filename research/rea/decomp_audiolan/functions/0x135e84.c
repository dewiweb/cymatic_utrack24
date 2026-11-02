// rea decompile_all
// name: FUN_00135e84
// address: 0x135e84
// body: available
// range: 0x135e84-0x13600b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x135f40 to 0x10e240 FUN_0010e240 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x136008 to 0x10e240 FUN_0010e240 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135e84(int param_1,int param_2,uint param_3,undefined4 param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  
  *param_5 = (short)param_3;
  if (param_3 == 0) {
    FUN_0010e240(param_4,s__None__0013600c);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = param_3 - 1;
  FUN_0010e500(param_4);
  do {
    if ((iVar4 == 0) || (iVar1 = FUN_0015e888(param_4), iVar1 == 0)) {
      iVar4 = FUN_0015e888(param_4);
      if (iVar4 == 0) {
        return;
      }
      FUN_0010e240(param_4,s__UNKNOWN_LIST__00136024);
      return;
    }
    if (*(int *)(iVar4 + 0xc) == param_2) {
      if (param_3 < *(ushort *)(iVar4 + 0x12)) {
        iVar1 = *(int *)(param_1 + 8);
        while (iVar1 != 0) {
          if (iVar5 == 0) {
            (**(code **)(**(int **)(iVar1 + 0xc) + 0x7c))
                      (auStack_38,*(int **)(iVar1 + 0xc),*(undefined2 *)(iVar1 + 0x10));
            FUN_0010e498(param_4,auStack_34);
            FUN_0010f210(auStack_38);
            goto LAB_00135fc0;
          }
          uVar2 = (**(code **)(**(int **)(iVar1 + 0xc) + 0x5c))();
          if (uVar2 == *(ushort *)(iVar4 + 0x10)) {
            iVar5 = iVar5 + -1;
          }
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
          }
          else {
            iVar1 = *(int *)(iVar1 + 8);
          }
        }
        iVar1 = *(int *)(param_1 + 0x14);
        while (iVar3 = iVar1, iVar3 != 0) {
          if (iVar5 == 0) {
            FUN_0010e498(param_4,iVar3 + 0xc);
            goto LAB_00135fc0;
          }
          if (*(short *)(iVar3 + 0x14) == *(short *)(iVar4 + 0x10)) {
            iVar5 = iVar5 + -1;
          }
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar3 != 0) {
            iVar1 = *(int *)(iVar3 + 8);
          }
        }
      }
      FUN_0010e240(param_4,s__OUT_OF_RANGE__00136014);
    }
LAB_00135fc0:
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x20);
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
  } while( true );
}

