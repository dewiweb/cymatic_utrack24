// rea decompile_all
// name: FUN_0019e358
// address: 0x19e358
// body: available
// range: 0x19e358-0x19e447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19e3c8 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0019e358(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,code *param_6,undefined4 param_7)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_6 == entry) {
    FUN_00015210(s_Assertion___s__failed_at_line__d_0019e470,s___No_init_function_given_0019e456 + 2
                 ,0x8f,_DAT_0019e454);
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = param_5;
  pcVar2 = DAT_0019e448;
  param_1[0x10] = 0;
  cVar1 = *pcVar2;
  *(char *)(param_1 + 0xf) = cVar1;
  *pcVar2 = cVar1 + '\x01';
  param_1[4] = param_7;
  if (param_2 == (int *)0x0) {
LAB_0019e42a:
    iVar4 = 0;
  }
  else {
    if (*param_2 != 0) {
      piVar3 = (int *)*DAT_0019e44c;
      while (piVar3 != (int *)0x0) {
        if ((*piVar3 == param_1[1]) && (*piVar3 * 0x10000 - DAT_0019e450 != 0)) {
          piVar3 = (int *)piVar3[3];
          FUN_001b186c();
        }
        else {
          piVar3 = (int *)piVar3[3];
        }
      }
      piVar3 = (int *)*DAT_0019e4a4;
      if (piVar3 != (int *)0x0) {
        do {
          if ((*piVar3 != 0) && (*piVar3 == param_1[1])) {
            if (param_2 == (int *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *param_2;
            }
            *piVar3 = iVar4;
          }
          do {
            piVar3 = (int *)piVar3[3];
            if (piVar3 == (int *)0x0) goto LAB_0019e3fa;
          } while (piVar3 == (int *)0x0);
        } while( true );
      }
LAB_0019e3fa:
      if (param_2 == (int *)0x0) goto LAB_0019e42a;
    }
    iVar4 = *param_2;
  }
  param_1[1] = iVar4;
  uVar5 = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar5 = *param_3;
  }
  param_1[2] = uVar5;
  uVar5 = 0;
  if (param_4 != (undefined4 *)0x0) {
    uVar5 = *param_4;
  }
  param_1[3] = uVar5;
  iVar4 = (*param_6)(param_1);
  pcVar2 = DAT_0019e448;
  if (iVar4 != 0) {
    return (undefined4 *)0x0;
  }
  *param_1 = *(undefined4 *)(DAT_0019e448 + 4);
  *(undefined4 **)(pcVar2 + 4) = param_1;
  if ((int)((uint)*(byte *)((int)param_1 + 0x39) << 0x18) < 0) {
    FUN_0018d3e8(param_1);
  }
  return param_1;
}

