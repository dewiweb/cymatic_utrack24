// rea decompile_all
// name: FUN_0049bae9
// address: 0x49bae9
// body: available
// range: 0x49bae9-0x49bb88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bae9(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *in_EAX;
  int iVar5;
  int in_ECX;
  byte bVar6;
  undefined4 local_8;
  
  if ((param_1 & 2) == 0) {
    bVar6 = in_EAX[3];
    iVar4 = in_ECX;
    if ((bVar6 == 0) || (iVar4 = in_ECX, *(byte *)(in_ECX + 0x10d) < bVar6)) goto LAB_0049bb7a;
    local_8 = CONCAT31((int3)((uint)in_ECX >> 8),bVar6);
    iVar5 = 1;
  }
  else {
    bVar6 = 8;
    if (param_1 != 3) {
      bVar6 = *(byte *)(in_ECX + 0x10d);
    }
    bVar1 = *in_EAX;
    iVar4 = in_ECX;
    if (((((bVar1 == 0) || (iVar4 = in_ECX, bVar6 < bVar1)) ||
         (bVar2 = in_EAX[1], iVar4 = in_ECX, bVar2 == 0)) ||
        ((iVar4 = in_ECX, bVar6 < bVar2 || (bVar3 = in_EAX[2], iVar4 = in_ECX, bVar3 == 0)))) ||
       (iVar4 = in_ECX, bVar6 < bVar3)) goto LAB_0049bb7a;
    local_8._3_1_ = (undefined1)((uint)in_ECX >> 0x18);
    local_8._0_3_ = CONCAT12(bVar3,CONCAT11(bVar2,bVar1));
    iVar5 = 3;
  }
  if ((param_1 & 4) != 0) {
    bVar6 = in_EAX[4];
    iVar4 = local_8;
    if ((bVar6 == 0) || (*(byte *)(in_ECX + 0x10d) < bVar6)) {
LAB_0049bb7a:
      local_8 = iVar4;
      FUN_00491216();
      return;
    }
    *(byte *)((int)&local_8 + iVar5) = bVar6;
    iVar5 = iVar5 + 1;
  }
  FUN_0049adf3(&local_8,iVar5);
  return;
}

