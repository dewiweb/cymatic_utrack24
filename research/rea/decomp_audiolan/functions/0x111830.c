// rea decompile_all
// name: FUN_00111830
// address: 0x111830
// body: available
// range: 0x111830-0x111a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x111928 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x111a04 to 0xd6b90 FUN_000d6b90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00111830(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar6 = *(int *)(param_2 + 4);
  *(undefined1 *)(param_1 + iVar6 + 0x1c) = 2;
  puVar1 = DAT_00111a0c;
  piVar2 = (int *)*DAT_00111a08;
  do {
    if ((int *)DAT_00111a08[1] == piVar2) {
LAB_00111910:
      uVar8 = FUN_00154ddc(param_2);
      thunk_FUN_000028a4(s_8___ERROR__AvPort__markInterface_00111a10._0_4_,
                         *(undefined4 *)(param_1 + 4),uVar8);
      return;
    }
    if (*(int *)*piVar2 == param_2) {
      iVar7 = *piVar2;
      if (iVar7 != 0) {
        uVar8 = **(undefined4 **)(param_2 + 8);
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar3 = FUN_000d6bd0();
          FUN_000d6b90(uVar3,uVar8,1);
          *puVar1 = *puVar1 & ~(1 << (*(uint *)(param_1 + 4) & 0xff)) & 0xffU | *puVar1 & 0xffffff00
          ;
          if (param_3 == 0xffffffff) {
            FUN_000028a4(s_8___ERROR__AvPort__markInterface_00111a10 + 4);
          }
          else {
            if (iVar6 == 0) {
              puVar4 = puVar1 + *(int *)(param_1 + 4) + 0x800;
              uVar5 = puVar4[4] & 0xffffff80 | param_3 & 0x7f;
            }
            else {
              if (iVar6 != 1) {
                if (iVar6 == 2) {
                  puVar1[*(int *)(param_1 + 4) + 0x804] =
                       (param_3 & 0x7f) << 0x10 | puVar1[*(int *)(param_1 + 4) + 0x804] & 0xff80ffff
                  ;
                }
                else if (iVar6 == 3) {
                  puVar1[*(int *)(param_1 + 4) + 0x804] =
                       (param_3 & 0x7f) << 0x18 | puVar1[*(int *)(param_1 + 4) + 0x804] & 0x80ffffff
                  ;
                }
                goto LAB_001119bc;
              }
              puVar4 = puVar1 + *(int *)(param_1 + 4) + 0x800;
              uVar5 = (param_3 & 0x7f) << 8 | puVar4[4] & 0xffff80ff;
            }
            puVar4[4] = uVar5;
          }
        }
LAB_001119bc:
        *(short *)(iVar7 + 4) = *(short *)(iVar7 + 4) + 1;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *puVar1 = (*puVar1 | 1 << (*(uint *)(param_1 + 4) & 0xff)) & 0xff | *puVar1 & 0xffffff00;
        uVar3 = FUN_000d6bd0();
        FUN_000d6b90(uVar3,uVar8,0);
        return;
      }
      goto LAB_00111910;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}

