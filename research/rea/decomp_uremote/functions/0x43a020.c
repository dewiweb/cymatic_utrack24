// rea decompile_all
// name: FUN_0043a020
// address: 0x43a020
// body: available
// range: 0x43a020-0x43a18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a020(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piStack_7c;
  uint local_68;
  
  bVar7 = *(int *)(in_ECX + 0xa4) != 0;
  local_68 = 0;
  if (0 < *(int *)(in_ECX + 0xa4)) {
    do {
      if (bVar7) {
        piStack_7c = *(int **)(*(int *)(in_ECX + 0x9c) + local_68 * 4);
      }
      else {
        piStack_7c = (int *)0x0;
      }
      piVar1 = (int *)*piStack_7c;
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        piStack_7c = piStack_7c + 5;
        FUN_0047ceaa();
        FUN_0047620f(&piStack_7c);
        FUN_0047cda7();
        piStack_7c = (int *)0x1;
        FUN_0043a520();
        FUN_0047cf16(param_1,piVar1 + 3);
      }
      else if (iVar2 == 1) {
        piStack_7c = (int *)0x43a06d;
        FUN_0047cd0e();
        FUN_0047620f(&piStack_7c);
        FUN_0047cda7();
        piStack_7c = (int *)0x2;
        FUN_0047d907();
        piStack_7c = (int *)0x43a09f;
        FUN_0043a520();
        piStack_7c = (int *)0x43a0af;
        FUN_0043a520();
        piStack_7c = (int *)0x43a0bf;
        FUN_0043a520();
        piStack_7c = (int *)0x43a0cf;
        FUN_0043a520();
        piStack_7c = (int *)0x43a0db;
        piStack_7c = (int *)FUN_0047e371();
        FUN_0047e366();
        uVar9 = 0;
        uVar8 = 0;
        uVar3 = FUN_005b3fb0(0,0);
        uVar4 = FUN_005b3fb0(uVar3);
        uVar5 = FUN_005b3fb0(uVar4);
        uVar6 = FUN_005b3fb0(uVar5);
        FUN_0047d9b4(param_1,uVar6,uVar5,uVar4,uVar3,uVar8,uVar9);
        piStack_7c = (int *)0x43a11b;
        FUN_0047cd1a();
      }
      local_68 = local_68 + 1;
      bVar7 = local_68 < *(uint *)(in_ECX + 0xa4);
    } while ((int)local_68 < (int)*(uint *)(in_ECX + 0xa4));
  }
  return;
}

