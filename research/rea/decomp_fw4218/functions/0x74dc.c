// rea decompile_all
// name: FUN_000074dc
// address: 0x74dc
// body: available
// range: 0x74dc-0x763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ac to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00007634) */
/* WARNING: Removing unreachable block (ram,0x00007598) */

void FUN_000074dc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  FUN_001f00bc(param_2 + 0x118);
  uVar1 = DAT_00007a44;
  iVar4 = *(int *)(*(int *)(param_2 + 0x16c) + 8);
  if (iVar4 != *(int *)(param_2 + 0x16c)) {
    do {
      puVar6 = *(undefined4 **)(iVar4 + 0x1c);
      if (*(undefined4 **)(iVar4 + 0x20) != puVar6) {
        do {
          piVar5 = (int *)*puVar6;
          iVar2 = (**(code **)(*piVar5 + 8))(piVar5);
          if ((iVar2 == param_3) && (iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5), iVar2 == param_4)
             ) {
            *param_1 = uVar1;
            param_1[1] = piVar5;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 0xc0))();
            }
            goto LAB_000075a0;
          }
          puVar6 = puVar6 + 1;
        } while (*(undefined4 **)(iVar4 + 0x20) != puVar6);
      }
      iVar2 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar2 = *(int *)(iVar4 + 4);
        while (iVar3 = iVar2, iVar4 == *(int *)(iVar3 + 0xc)) {
          iVar4 = iVar3;
          iVar2 = *(int *)(iVar3 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar3) {
          iVar4 = iVar3;
        }
      }
      else {
        do {
          iVar4 = iVar2;
          iVar2 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(param_2 + 0x16c));
  }
  *param_1 = uVar1;
  param_1[1] = 0;
LAB_000075a0:
  FUN_001f06d4(param_2 + 0x118);
  return;
}

