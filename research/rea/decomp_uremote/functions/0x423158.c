// rea decompile_all
// name: FUN_00423158
// address: 0x423158
// body: available
// range: 0x423158-0x4231f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423158(void)

{
  undefined1 *puVar1;
  undefined1 *in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_8;
  
  puVar5 = in_EAX + 1;
  puVar8 = in_EAX + 2;
  local_8 = in_EAX + 3;
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,*puVar5),*puVar8),*local_8);
  iVar2 = FUN_004228d4();
  if (iVar2 == 0) {
    iVar2 = *(int *)(in_ECX + 0x20);
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar1 = local_8 + 3;
        puVar4 = puVar5 + 3;
        puVar7 = puVar8 + 3;
        local_8 = local_8 + 5;
        puVar5 = puVar5 + 5;
        puVar8 = puVar8 + 5;
        *(uint *)(iVar2 + uVar3 * 4) = (uint)CONCAT21(CONCAT11(*puVar4,*puVar7),*puVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
    *(undefined4 *)(iVar2 + uVar3 * 4) = 0;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

