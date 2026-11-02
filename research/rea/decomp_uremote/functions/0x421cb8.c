// rea decompile_all
// name: FUN_00421cb8
// address: 0x421cb8
// body: available
// range: 0x421cb8-0x421de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00421cb8(undefined1 *param_1,uint *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_14 = 0;
  local_18 = 0;
  local_c = *param_2 + 1;
  iVar2 = *(int *)((int)param_1 + 0x10);
  local_10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x200c),
                                        *(undefined1 *)(iVar2 + 0x200d)),
                               *(undefined1 *)(iVar2 + 0x200e)),*(undefined1 *)(iVar2 + 0x200f));
  if (local_10 != 0) {
    param_1 = (undefined1 *)(iVar2 + 0x200f);
    puVar3 = (undefined1 *)(iVar2 + 0x200e);
    puVar7 = (undefined1 *)(iVar2 + 0x200d);
    puVar9 = (undefined1 *)(iVar2 + 0x200c);
    do {
      puVar4 = puVar3 + 8;
      puVar1 = param_1 + 8;
      puVar8 = puVar9 + 8;
      puVar6 = puVar7 + 8;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar9[4],puVar7[4]),puVar3[4]),param_1[4]);
      puVar3 = puVar3 + 0xc;
      param_1 = param_1 + 0xc;
      puVar9 = puVar9 + 0xc;
      puVar7 = puVar7 + 0xc;
      if (local_c < uVar5) {
        local_c = uVar5;
      }
      if ((local_c <= CONCAT31(CONCAT21(CONCAT11(*puVar8,*puVar6),*puVar4),*puVar1)) &&
         (local_18 = (CONCAT31(CONCAT21(CONCAT11(*puVar9,*puVar7),*puVar3),*param_1) - uVar5) +
                     local_c, local_18 != 0)) {
        local_14 = local_c;
        break;
      }
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *param_2 = local_14;
  return local_18;
}

