// rea decompile_all
// name: FUN_0041089f
// address: 0x41089f
// body: available
// range: 0x41089f-0x4109f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041089f(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  char local_28 [15];
  char local_19;
  char local_18 [4];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  char local_9;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_0041106d();
  if ((iVar3 == 0) && (iVar3 = FUN_004110b4(local_18,0x10), iVar3 == 0)) {
    iVar3 = CONCAT31(CONCAT21(CONCAT11(local_18[0],local_18[1]),local_18[2]),local_18[3]) + in_ECX;
    *param_2 = iVar3;
    iVar5 = CONCAT31(CONCAT21(CONCAT11(local_14,local_13),local_12),local_11) + in_ECX;
    if ((CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d) + iVar3 == iVar5) &&
       ((iVar5 != in_ECX && (iVar3 = FUN_0041106d(), iVar3 == 0)))) {
      local_19 = local_9 + '\x01';
      iVar3 = FUN_004110b4(local_28,0x10);
      if (iVar3 == 0) {
        bVar1 = true;
        iVar3 = 0;
        bVar2 = bVar1;
        do {
          if (local_28[iVar3] != '\0') {
            bVar1 = false;
          }
          if (local_28[iVar3] != local_18[iVar3]) {
            bVar2 = false;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x10);
        if ((bVar1) || (bVar2)) {
          iVar3 = FUN_00411095(8);
          uVar4 = FUN_00411377();
          if ((iVar3 == 0) && ((uVar4 & 0xffff) != 0xffffffff)) {
            iVar3 = FUN_0041106d();
            if (iVar3 == 0) {
              *param_1 = (uVar4 & 0xffff) + iVar5;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

