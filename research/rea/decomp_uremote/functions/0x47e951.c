// rea decompile_all
// name: FUN_0047e951
// address: 0x47e951
// body: available
// range: 0x47e951-0x47ea15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e951(uint param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  uint *local_20 [7];
  
  uVar3 = FUN_0047e366();
  if (param_1 < uVar3) {
    uVar3 = FUN_0047e371();
    if (param_2 < uVar3) {
      cVar1 = FUN_0047e3d7();
      if (cVar1 != '\0') {
        FUN_0047e75a(local_20,in_EAX,param_1,param_2,1,1,2);
        cVar1 = FUN_0047e3ca();
        if (cVar1 == '\0') {
          uVar2 = FUN_005b3fe6();
          *(undefined1 *)local_20[0] = uVar2;
        }
        else {
          iVar4 = FUN_005b3fb0();
          iVar4 = 1 - iVar4;
          uVar3 = *local_20[0];
          *local_20[0] = ((uVar3 & 0xff00ff) * iVar4 >> 8 ^ (uVar3 >> 8 & 0xffff00ff) * iVar4) &
                         0xff00ff ^ (uVar3 >> 8 & 0xff00ff) * iVar4;
        }
        FUN_0047e819();
      }
    }
  }
  return;
}

