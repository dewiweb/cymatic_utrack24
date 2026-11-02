// rea decompile_all
// name: FUN_0043f95c
// address: 0x43f95c
// body: available
// range: 0x43f95c-0x43faa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043f95c(void)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  float local_10;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    iVar4 = FUN_0044bfc5();
    fVar2 = (float)*(int *)(iVar4 + 0xc);
    puVar1 = (undefined4 *)(in_ECX + 0x104);
    if ((*(char *)*puVar1 != '\0') && (*(char *)(in_ECX + 0x100) == '\0')) {
      uVar5 = FUN_005b3fb0();
      uVar5 = FUN_005b3fb0(uVar5);
      FUN_0043a9ae(puVar1,uVar5);
      FUN_0049f5e8();
      FUN_004c4d7a();
    }
    local_10 = 0.0;
    if (*(char *)*puVar1 != '\0') {
      fVar7 = (float10)FUN_0049fa7b(puVar1);
      local_10 = (float)fVar7;
    }
    *(undefined4 *)(in_ECX + 0x124) = 0;
    *(undefined4 *)(in_ECX + 0x128) = 0;
    iVar4 = FUN_005b3fb0();
    cVar3 = FUN_00478a60();
    if (cVar3 == '\0') {
      iVar4 = *(int *)(in_ECX + 0x18);
      iVar6 = FUN_00440367(iVar4);
      *(float *)(in_ECX + 0x124) = (float)(iVar6 + -4);
      if (*(char *)*puVar1 == '\0') {
        fVar2 = ((float)iVar4 - (float)(iVar6 + -4)) * 0.5;
      }
      *(float *)(in_ECX + 0x128) = fVar2;
      iVar4 = FUN_005b3fb0();
    }
    FUN_00440272(local_10,(float)(*(int *)(in_ECX + 0x18) - iVar4) - *(float *)(in_ECX + 0x120));
  }
  return;
}

