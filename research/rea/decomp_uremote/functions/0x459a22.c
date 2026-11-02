// rea decompile_all
// name: FUN_00459a22
// address: 0x459a22
// body: available
// range: 0x459a22-0x459d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459a22(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e04ba;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (**(char **)(in_ECX + 0xd0) != '\0') {
    FUN_0044bfc5();
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047ceaa();
    iVar4 = *(int *)(in_ECX + 0x18);
    if (*(char *)(in_ECX + 0x114) != '\0') {
      iVar3 = FUN_005b3fb0();
      FUN_0047888f();
      uStack_c = 0;
      fVar1 = (float)(*(int *)(in_ECX + 0x1c) / 2);
      FUN_0049fa03();
      FUN_00479368(auStack_38,(float)iVar3,fVar1,(float)iVar4,fVar1);
      FUN_0047d2ae();
      iVar4 = FUN_005b3fb0();
      uStack_c = 0xffffffff;
      FUN_004f7994();
    }
    if ((*(char *)(in_ECX + 0x116) != '\0') || (*(int *)(in_ECX + 0x80) < 1)) {
      if (*(int *)(in_ECX + 0xcc) == 4) {
        FUN_0044bfc5();
        FUN_004d076d();
        FUN_0047cda7();
      }
      FUN_0047d02d(param_1,in_ECX + 0xd0,0,0,iVar4,*(undefined4 *)(in_ECX + 0x1c));
      FUN_0044bfc5();
      FUN_004d076d();
      FUN_0047cda7();
    }
    cVar2 = FUN_00465970();
    if ((cVar2 != '\0') && (iVar4 = *(int *)(in_ECX + 0xcc), 0 < iVar4)) {
      if (iVar4 < 3) {
        FUN_0049fa60(in_ECX + 0xd0);
        puVar5 = auStack_50;
        FUN_0047745f(*(undefined4 *)(in_ECX + 0x120),puVar5);
        FUN_0047713c(puVar5);
      }
      else {
        if (iVar4 != 3) {
          ExceptionList = local_14;
          return;
        }
        FUN_0049fa60(in_ECX + 0xd0);
        puVar5 = auStack_80;
        FUN_0047745f(*(undefined4 *)(in_ECX + 0x120),puVar5);
        FUN_0047713c(puVar5);
      }
      FUN_0047d2ae();
    }
  }
  ExceptionList = local_14;
  return;
}

