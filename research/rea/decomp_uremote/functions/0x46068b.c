// rea decompile_all
// name: FUN_0046068b
// address: 0x46068b
// body: available
// range: 0x46068b-0x460723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_0046068b(char param_1)

{
  uint uVar1;
  int in_ECX;
  int extraout_ECX;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 local_98 [40];
  undefined1 local_70 [28];
  undefined1 local_54 [40];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x46069a;
  uVar2 = 0;
  if (param_1 == '\0') goto LAB_004606a8;
  puVar4 = (undefined *)0x0;
  puVar3 = (undefined1 *)0x0;
  do {
    __CxxThrowException_8(puVar3,puVar4);
    in_ECX = extraout_ECX;
LAB_004606a8:
    uVar1 = *(uint *)(in_ECX + 0xc) & *(uint *)(in_ECX + 8);
    if ((uVar1 & 4) == 0) {
      uVar2 = 2;
      if ((uVar1 & 2) != 0) {
        basic_string<>("ios_base::failbit set");
        local_8 = 1;
        goto LAB_004606c2;
      }
      basic_string<>("ios_base::eofbit set");
      local_8 = 2;
      FUN_00460645(local_98,local_70);
      puVar3 = local_98;
    }
    else {
      basic_string<>("ios_base::badbit set");
      local_8 = uVar2;
LAB_004606c2:
      FUN_00460645(local_54,local_2c);
      puVar3 = local_54;
    }
    puVar4 = &DAT_009416a0;
  } while( true );
}

