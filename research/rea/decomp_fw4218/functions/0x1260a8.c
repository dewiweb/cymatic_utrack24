// rea decompile_all
// name: FUN_001260a8
// address: 0x1260a8
// body: available
// range: 0x1260a8-0x1261bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001260a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_001302d0(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_001c7218(param_2,s_Q__<B______Encoder__u_____001261bd._3_4_,_DAT_001261bc,0xffffffff
                        );
    if (iVar1 == 0) {
      return 0;
    }
    FUN_001f00bc(param_1 + 1);
    puVar2 = (undefined4 *)param_1[0x1b];
    if ((undefined4 *)param_1[0x1c] != puVar2) {
      do {
        piVar3 = (int *)*puVar2;
        if (piVar3 != (int *)0x0) {
          FUN_00002898(s_Q__<B______Encoder__u_____001261bd + 7,(char)piVar3[1]);
          (**(code **)(*piVar3 + 0x24))(piVar3);
        }
        puVar2 = puVar2 + 1;
      } while ((undefined4 *)param_1[0x1c] != puVar2);
    }
    puVar2 = (undefined4 *)param_1[0x18];
    if ((undefined4 *)param_1[0x19] != puVar2) {
      do {
        piVar3 = (int *)*puVar2;
        if (piVar3 != (int *)0x0) {
          FUN_00002898(s_____Decoder__u_____001261d8,(char)piVar3[1]);
          (**(code **)(*piVar3 + 0x24))(piVar3);
        }
        puVar2 = puVar2 + 1;
      } while ((undefined4 *)param_1[0x19] != puVar2);
    }
    FUN_001f06d4(param_1 + 1);
  }
  return 1;
}

