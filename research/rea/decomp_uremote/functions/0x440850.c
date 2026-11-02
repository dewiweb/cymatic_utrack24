// rea decompile_all
// name: FUN_00440850
// address: 0x440850
// body: available
// range: 0x440850-0x440a08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440850(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  int iStack_1c;
  
  if (**(char **)(in_ECX + 0x17c) != '\0') {
    FUN_0047ceaa();
    iVar5 = *(int *)(in_ECX + 0x18c);
    fVar1 = *(float *)(in_ECX + 0x194);
    uStack_24 = FUN_005b3fb0();
    FUN_0047620f();
    FUN_0047cda7();
    iVar2 = *(int *)(in_ECX + 0x1c);
    iVar3 = *(int *)(in_ECX + 0x18);
    FUN_0044bfc5();
    FUN_0047d535((((float)iVar3 - *(float *)(in_ECX + 0x198)) - 8.0) * 0.5,
                 (((float)iVar2 - (float)iVar5 * fVar1) - 4.0) * 0.5);
    FUN_004d076d();
    FUN_0047cda7();
    iVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x18c)) {
      do {
        uVar7 = *(undefined4 *)(in_ECX + 0x18);
        uVar4 = FUN_005b3fb0();
        uVar6 = 0;
        FUN_00467165(0,uStack_24,uVar7,uVar4);
        FUN_0047d12a(uVar6,uStack_24,uVar7,uVar4);
        uStack_24 = FUN_005b3fb0();
        iVar5 = iVar5 + 1;
        in_ECX = iStack_1c;
      } while (iVar5 < *(int *)(iStack_1c + 0x18c));
    }
  }
  return;
}

